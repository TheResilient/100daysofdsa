#include <bits/stdc++.h>
using namespace std;

int cherryPickup(vector<vector<int>>& grid) {
    int n = grid.size();
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(n, 0)));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(i == j && j == k) dp[i][j][k] = grid[i][j];
                else if(i == j) dp[i][j][k] = grid[i][j] + dp[i][j][k-1];
                else if(j == k) dp[i][j][k] = grid[i][j] + dp[i-1][j][k];
                else dp[i][j][k] = grid[i][j] + max(dp[i-1][j][k], dp[i][j-1][k]);
            }
        }
    }
    return dp[n-1][n-1][n-1];
}

int main(){
    vector<vector<int>> grid = {{1,1,1,1,0},{1,0,0,1,0},{1,0,0,1,0},{1,0,0,1,0},{0,1,1,1,1}};
    cout << cherryPickup(grid) << endl;
    return 0;
}