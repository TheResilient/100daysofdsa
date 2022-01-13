#include <bits/stdc++.h>
using namespace std;

int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    int dp[n+1];
    dp[0] = 0;
    dp[1] = cost[0];
    for(int i = 2; i <= n; i++){
        dp[i] = min(dp[i-1], dp[i-2]) + cost[i-1];
    }
    return min(dp[n], dp[n-1]);
}

int main(){
    vector<int> cost = {10, 15, 20};
    cout << minCostClimbingStairs(cost) << endl;
    return 0;
}