#include <bits/stdc++.h>
using namespace std;

void smallest_lexicographical_subsequence(string s) {
    int n = s.length();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        dp[i][i] = 1;
    }
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = 2;
        }
    }
    for (int len = 3; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;
            if (s[i] == s[j] && dp[i + 1][j - 1] == len - 2) {
                dp[i][j] = len;
            } else if (s[i] == s[j]) {
                dp[i][j] = dp[i + 1][j - 1] + 2;
            } else if (dp[i + 1][j] >= dp[i][j - 1]) {
                dp[i][j] = dp[i + 1][j];
            } else {
                dp[i][j] = dp[i][j - 1];
            }
        }
    }
    cout << dp[0][n - 1] << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        smallest_lexicographical_subsequence(s);
    }
    return 0;
}