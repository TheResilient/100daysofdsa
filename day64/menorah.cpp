#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long dp[200001][20]={0};
    for(int i=0; i<200001; i++){
        int check=i,idx=0;
        while(check){
            dp[i][idx]+=(check%2);
            idx +=1;
            check>>1;
        }
        for(int j=0; j<20; i++){
            dp[i][j] = dp[i-1][j];
        }
    }   
    long long l,r; cin>>l>>r;
    long long high=0;
    for(int i=0; i<20; i++){
        high = max(high, dp[r][i]-dp[l-1][i]);
    }
    cout<<r-l+1-high<<endl;
}

int main(){
    

    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}