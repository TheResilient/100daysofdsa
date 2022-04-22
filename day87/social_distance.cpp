#include<bits/stdc++.h>
using namespace std;

// m chairs are arranged in a circle sequentially. The chairs are numbered from 0 to m−1. n people want to sit in these chairs. The i-th of them wants at least a[i] empty chairs both on his right and left side.

// More formally, if the i-th person sits in the j-th chair, then no one else should sit in the following chairs: (j−a[i])modm, (j−a[i]+1)modm, ... (j+a[i]−1)modm, (j+a[i])modm.

// Decide if it is possible to sit down for all of them, under the given limitations.

bool socialdistance(int n, int m, int a[])
{
    int dp[n+1][m];
    for(int i=0;i<m;i++)
        dp[0][i] = 1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            dp[i][j] = dp[i-1][j];
            if(j-a[i-1]>=0)
                dp[i][j] += dp[i-1][j-a[i-1]];
            if(j+a[i-1]<m)
                dp[i][j] += dp[i-1][j+a[i-1]];
        }
    }
    return dp[n][0]%1000000007;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        cout<<socialdistance(n, m, a)<<endl;
    }
    return 0;
}