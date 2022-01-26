#include<bits/stdc++.h>
using namespace std;

NumMatrix(vector<vector<int>>& matrix){
    int m = matrix.size();
    if(m == 0) return;
    int n = matrix[0].size();
    if(n == 0) return;
    this->sums = vector<vector<int>>(m, vector<int>(n, 0));

}

int sumRegion(int row1, int col1, int row2, int col2){
    
}