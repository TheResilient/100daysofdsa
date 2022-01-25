#include<bits/stdc++.h>
using namespace std;

int minimumTotal(vector<vector<int>>& triangle){
    int n = triangle.size();
    vector<int> dp(triangle.back());
    for (int layer = n - 2; layer >= 0; layer--) // For each layer
    {
        for (int i = 0; i <= layer; i++) // Check its every 'node'
        {
            // Find the lesser of its two children, and sum the current value in the triangle with it.
            dp[i] = min(dp[i], dp[i + 1]) + triangle[layer][i];
        }
    }
    return dp[0];
}

int main(){
    vector<vector<int>> triangle={{2},{3,4},{6,5,7},{4,1,8,3}};
    cout<<minimumTotal(triangle)<<endl;
}