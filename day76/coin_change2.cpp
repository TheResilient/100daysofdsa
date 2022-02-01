#include<bits/stdc++.h>
using namespace std;


// number of combinations to get sum
int change(int t, vector<int> &cs)
{
    int dp[5001] = {1};
    for (auto c : cs)
        for (auto j = c; j <= t; ++j)
            dp[j] += dp[j - c];
    return dp[t];
}

int main(){
    vector<int> coins = {1,2,3};
    int amount = 4;
    cout << change(amount, coins);
    return 0;
}