#include <bits/stdc++.h>
using namespace std;

// using recursion
int coinchange(vector<int>& coins, int amount, int index){
    if(amount == 0) return 1;
    if(amount < 0) return 0;
    if(index >= coins.size()) return 0;
    return coinchange(coins, amount - coins[index], index) + coinchange(coins, amount, index + 1);
}

// using dynamic programming
int coinchange(vector<int>& coins, int amount){
    int dp[amount+1];
    dp[0] = 1;
    for(int i = 1; i <= amount; i++){
        dp[i] = 0;
        for(int j = 0; j < coins.size(); j++){
            if(i - coins[j] >= 0){
                dp[i] += dp[i - coins[j]];
            }
        }
    }
    return dp[amount];
}