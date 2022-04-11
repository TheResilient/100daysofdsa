#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> shiftGrid(vector<vector<int>>&grid, int k){
    vector<int> res;
    int n=grid.size();
    int m=grid[0].size();
    for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[i].size(); j++){
            res.push_back(grid[i][j]);
            // cout<<grid[i][j]<<" ";
        }
    }
    // cout<<endl;
    int ans[res.size()];
    for(int i=0; i<res.size(); i++){
        // cout<<res[i]<<" ";
        ans[(i+k)%(res.size())]=res[i];
    }
    // for(int i=0; i<res.size(); i++) cout<<ans[i]<<" ";
    int l=0;
    vector<vector<int>>finalans;
    for(int i=0; i<n; i++)    {
        vector<int>in;
        // cout<<in.size()<<"size"<<endl;
        for(int j=0; j<m; j++){
            in.push_back(ans[l]);
            // cout<<ans[l]<;
            l++;
        }
        // cout<<endl;
        finalans.push_back(in);
    }
    // for (int i = 0; i < finalans.size(); i++)
    // {
    //     for (int j = 0; j < finalans[i].size(); j++)
    //     {
    //         cout <<finalans[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return finalans;
}

int main(){
    vector<vector<int>>grid={{1,2,3},{4,5,6},{7,8,9}};
    int k=1;
    vector<vector<int>>ans=shiftGrid(grid, k);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}