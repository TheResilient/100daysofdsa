#include<bits/stdc++.h>
using namespace std;

// vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k){
//     int n=mat.size();
//     int m=mat[0].size();
//     vector<vector<int>> res(n,vector<int>(m,0));

//     for(int i=0; i<n; i++){
//         int sum=0;
//         for(int j=0; j<m; j++){
//             sum+=mat[i][j];
//             while(i-k>=0 && j-k>=0 && i+k<n && j+k<m){
//                 sum+=mat[i-k][j-k];
//                 sum+=mat[i+k][j+k];
//                 sum+=mat[i-k][j+k];
//                 sum+=mat[i+k][j-k];
//                 k++;
//             }
//             if(i-k<0 || j-k<0){

//             }
//             res[i][j]=sum;
//         }
//     }
//     return res;

// }
vector<vector<int>> prefixSum(vector<vector<int>> &mat)
{
    vector<vector<int>> prefix_sum = mat;

    for (int i = 0; i < mat.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < mat[0].size(); j++)
        {
            sum = sum + mat[i][j];
            if (i > 0)
            {
                prefix_sum[i][j] = sum + prefix_sum[i - 1][j];
            }
            else
            {
                prefix_sum[i][j] = sum;
            }
        }
    }

    return prefix_sum;
}

vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int K)
{
    vector<vector<int>> prefix_sum = prefixSum(mat);
    vector<vector<int>> answer = prefix_sum;

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            int upper_i = ((i + K) >= mat.size()) ? (mat.size() - 1) : (i + K);
            int upper_j = ((j + K) >= mat[0].size()) ? (mat[0].size() - 1) : (j + K);

            int lower_i = ((i - K) <= 0) ? 0 : (i - K);
            int lower_j = ((j - K) <= 0) ? 0 : (j - K);

            answer[i][j] = prefix_sum[upper_i][upper_j] - ((lower_i == 0) ? 0 : prefix_sum[lower_i - 1][upper_j]) - ((lower_j == 0) ? 0 : prefix_sum[upper_i][lower_j - 1]) + ((lower_i == 0) || (lower_j == 0) ? 0 : prefix_sum[lower_i - 1][lower_j - 1]);
        }
    }

    return answer;
}



// 01 02 03
// 11 12 13
// 21 22 23

int main(){
    vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> res=matrixBlockSum(mat,1);
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[0].size(); j++) cout<<res[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
