#include<bits/stdc++.h>
using namespace std;

bool winnerSquareGame(int n){
    vector<bool> dp(n+1);
    // dp[0]=true;
    for(int i=1;i<=n;i++){
        for(int j=1;j*j<=i;j++){
            if(!dp[i-j*j]){
                dp[i]=true;
                break;
            }
        }
    }
    // for(int i=0; i<dp.size(); i++) cout<<dp[i]<<endl;
    return dp[n];
}

int main(){
    int n; cin>>n;
    cout<<winnerSquareGame(n)<<endl;
    return 0;
}