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

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> r(numRows);

    for (int i = 0; i < numRows; i++)
    {
        r[i].resize(i + 1);
        r[i][0] = r[i][i] = 1;

        for (int j = 1; j < i; j++)
            r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
    }

    return r;
}

int main()
{
    int n;
    cin >> n;
    // pascaltriangle(5);
    vector<vector<int>> triangle=generate(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < triangle[i].size(); i++)
        {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}