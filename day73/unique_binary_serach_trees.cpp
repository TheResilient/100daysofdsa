#include<bits/stdc++.h>
using namespace std;

// int numTrees(int n){
//     vector<int> dp(n+1);
//     dp[0]=1;
//     dp[1]=1;
//     for(int i=2; i<=n; i++){
//         // dp[i]=0;
//         for(int j=1; j<=i; j++){
//             dp[i]+=dp[j-1]*dp[i-j];
//             // cout<<dp[j-1]<<" "<<dp[i-j]<<" "<<dp[i]<<endl;
//         }
//     }
//     return dp[n];
// }


//Catalan Number Approach
int numTrees(int n){
    int c=1;
    for(int i=1; i<=n-1; i++){
        c=c*2*(2*i+1)/(i+2);
    }
    return c;
}

int main(){
    int nth; cin>>nth;
    cout<<numTrees(nth)<<endl;
    return 0;
}