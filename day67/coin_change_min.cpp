#include <bits/stdc++.h>
using namespace std;

int coin_change(vector<int>coins, int val){
    int dp[val+1];
    dp[0] = 0;
    for(int i=1; i<=val; i++){
        dp[i] = INT_MAX;
        for(int j=0; j<coins.size(); j++){
            if(i-coins[j] >= 0){
                dp[i] = min(dp[i], dp[i-coins[j]]+1);
            }
        }
    }
    if(dp[val] < -INT_MAX+10 or dp[val]>INT_MAX-10){
        return -1;
    }
    return dp[val];
}

int main(){
    int val;
    cin>>val;
    vector<int> coins;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        coins.push_back(x);
    }
    cout<<coin_change(coins, val);
    return 0;
}