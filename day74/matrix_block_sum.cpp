#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int k)
{
    int m = mat.size();
    int n = mat[0].size();
    vector<vector<int>> res(m, vector<int>(n, 0));
    int j = k;
    for (int i = j - k; i < n; i++)
    {
        int sum = 0;
        for (int x = i - k; x <= i; x++)
        {
            for (int y = j - k; y <= j; y++)
            {
                sum += mat[x][y];
            }
        }
        res[i][j] = sum;
    }

    return res;
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> res = matrixBlockSum(mat, 1);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

// 1 2 3
// 4 5 6
// 7 8 9
//   ||
// 12 21 16
// 27 45 33
// 24 39 28