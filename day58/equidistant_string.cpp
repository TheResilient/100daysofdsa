#include <bits/stdc++.h>
using namespace std;

// Equidistant string
// https://codeforces.com/problemset/problem/545/B

// convert binary string to decimal
int bin_to_dec(string s) {
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        res += (s[i] - '0') * pow(2, s.size() - i - 1);
    }
    return res;
}

string dec_to_bin(int n) {
    string res = "";
    while (n > 0) {
        res = (char)(n % 2 + '0') + res;
        n /= 2;
    }
    return res;
}

void solve(){
    string s, t,p;
    cin >> s >> t;
    // int n = s.size();
    // int m = t.size();
    // int d = m - n;
    // if(d < 0) {
    //     cout << "impossible" << endl;
    //     return;
    // }
    // int first = bin_to_dec(s);
    // int last = bin_to_dec(t);
    // int middle = (first+last)/2;
    // cout<<dec_to_bin(middle)<<endl;

    int c(0);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[i])
            p += s[i];
        else
        {
            c++;
            if (c % 2 == 1)
                p += s[i];
            else
                p += t[i];
        }
    }

    if (c % 2 == 1)
        cout << "impossible" << endl;
    else
        cout << p << endl;

}

int main(){
    solve();
    return 0;
}