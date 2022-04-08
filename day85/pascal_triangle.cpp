#include <bits/stdc++.h>
using namespace std;

void pascaltriangle(int n)
{
    vector<vector<int>> triangle(n);
    for (int i = 0; i < n; i++)
    {

        triangle[i].resize(i + 1);
        triangle[i][0] = 1;
        triangle[i][i] = 1;
        for (int j = 1; j < i; j++)
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < triangle[i].size(); i++)
        {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pascaltriangle(5);
    return 0;
}