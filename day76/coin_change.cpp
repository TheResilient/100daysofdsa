#include<bits/stdc++.h>
using namespace std;

int coinChange(vector<int>& coins, int amount){
    int dp[amount+1];
    dp[0] = 0;
    
    for(int i=1; i<=amount; i++){
        dp[i]=INT_MAX;
        for(int j=0; j<coins.size(); i++){
            if(coins[j]<=i){
                dp[i] = min(dp[i], dp[i-coins[j]]+1);
            }
        }
    }
    int ans = dp[amount];
    // return dp[amount];
    return dp[amount] == INT_MAX ? -1 : dp[amount];
}

int main(){
    vector<int> coins = {1,2,5};
    cout<<1<<endl;
    cout<<coinChange(coins, 11);
    return 0;
}