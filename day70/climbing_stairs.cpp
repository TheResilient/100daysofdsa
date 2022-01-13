#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
    if(n == 1) return 1;
    if(n == 2) return 2;
    int a = 1, b = 2;
    for(int i = 3; i <= n; i++){
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int climbStairs2(int n){
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    cout << climbStairs2(3) << endl;
    return 0;
}