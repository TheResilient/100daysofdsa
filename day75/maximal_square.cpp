#include <bits/stdc++.h>
using namespace std;

int maximalSquare(vector<vector<char>>& matrix){
    vector<vector<int>> dp(matrix.size()+1, vector<int>(matrix[0].size()+1)), onesRow(dp), onesCol(dp);
    int max_area = 0;
    for(int i=matrix.size()-1; i>0; i++){
        for(int j=matrix[0].size()-1; j>0; j++){
            if(matrix[i][j]=='1') onesRow[i][j]==1+onesRow[i][j+1];
            else onesRow[i][j]=0;
            if(matrix[i][j]=='1') onesCol[i][j]=1+onesCol[i+1][j];
            else onesCol[i][j]=0;
        }
    }
    
    for(int i=matrix.size()-1; i>0; i++){
        for(int j=matrix[0].size()-1; j>0; j++){
            if(matrix[i][j]=='1') dp[i][j]=1+min({onesRow[i][j]-1, onesCol[i][j]-1, dp[i+1][j+1]});
            else dp[i][j]=0;
            max_area=max(max_area, dp[i][j]);
        }
    }
    return max_area*max_area;
}

int main(){
    vector<vector<char>> matrix = { { '1', '0', '1', '0', '0' }, { '1', '0', '1', '1', '1' }, { '1', '1', '1', '1', '1' }, { '1', '0', '0', '1', '0' } };
    cout<<maximalSquare(matrix)<<endl;

    return 0;

}