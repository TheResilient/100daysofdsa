#include<bits/stdc++.h>
using namespace std;

int uniquePaths(int n, int m){
    // find unique paths from 1,1 to n,m
    vector<vector<int>> dp(n, vector<int>(m, 1));
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    
    return dp[n-1][m-1];

}

int main(){
    int n = 3;
    int m = 2;
    cout << uniquePaths(n, m) << endl;
    return 0;
}