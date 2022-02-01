#include<bits/stdc++.h>
using namespace std;

int numSquares(int n){
    // find least number of perfect squares that sum to n
    vector<int> dp(n+1, INT_MAX);
    dp[0] = 0;
    for(int i=1; i<=n; ++i){
        for(int j=1; j*j<=i; j++){
            dp[i]=min(dp[i], dp[i-j*j]+1);
        }
    }
    return dp[n];
}

int main(){
    int n; cin>>n;
    cout<<numSquares(n)<<endl;
    return 0;
}