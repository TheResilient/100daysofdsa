#include <bits/stdc++.h>
using namespace std;

int minPathSum(vector<vector<int>> &grid)
{
    // find shortest path
    vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), 0));

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (i == 0 and j == 0)
            {
                dp[0][0] = grid[0][0];
                // break;
            }
            else if(i>0 and j>0)
            {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
                // cout << dp[i][j] << endl;
            }
            else if(i==0 and j>0){
                dp[i][j] = dp[i][j-1] + grid[i][j];
            }
            else if(i>0 and j==0){
                dp[i][j] = dp[i-1][j] + grid[i][j];
            }
        }
    }
    return dp[grid.size() - 1][grid[0].size() - 1];
}

int main()
{
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}};
    cout << minPathSum(grid) << endl;
    return 0;
}