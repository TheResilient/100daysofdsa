#include <bits/stdc++.h>
using namespace std;

int minFallingPathSum(vector<vector<int>> &A)
{
    for (auto i = 1; i < A.size(); ++i)
        for (auto j = 0; j < A.size(); ++j)
            A[i][j] += min({A[i - 1][j], A[i - 1][max(0, j - 1)], A[i - 1][min((int)A.size() - 1, j + 1)]});
    return *min_element(begin(A[A.size() - 1]), end(A[A.size() - 1]));
}

int main()
{
    vector<vector<int>> matrix = {
        {2, 1, 3},
        {6, 5, 4},
        {7, 8, 9}};
    cout << minFallingPathSum(matrix) << endl;
    return 0;
}