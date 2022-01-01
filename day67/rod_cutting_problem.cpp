#include <bits/stdc++.h>
using namespace std;

// rod of given L length and price array of prices
// unbounded knapsack problem
int rod_cutting_problem(int L, int *price) {
    int n = sizeof(price) / sizeof(price[0]);
    int dp[L + 2][L + 2]={0};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= L; j++) {
            // if (i == 0 || j == 0) {
            //     dp[i][j] = 0;
            if (j >= i) {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - i] + price[i - 1]);
            } else {
                dp[i][j] = dp[i - 1][j];
                
            }
        }
    }
    return dp[n][L];
}

int main() {
    int L, n;
    cin >> L >> n;
    int price[n];
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    cout << rod_cutting_problem(L, price) << endl;
    return 0;
}