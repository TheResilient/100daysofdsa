#include <bits/stdc++.h>
using namespace std;

int solve(string s, int n)
{
    int m = n;
    int c = 0;
    for (int i = 0; i < m - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            s[i] = '0';
            s.erase(s.begin() + i + 1);
            c++;
            m--;
            i--;
        }
    }

    return c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (solve(s, n) == n - 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}