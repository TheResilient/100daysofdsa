#include <bits/stdc++.h>
// #include <bar>
#include <sstream>
using namespace std;

// complement of base 10 integer
int complementBase10(int n) {
    // convert to base 10 integer
    string s = to_string(n);
    // complement
    string t = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            t += '1';
        } else {
            t += '0';
        }
    }
    // make complement of base 10 integer
    stringstream geek(t);   
    int m;
    geek >> m;
    // convert to decimal integer
    int ans = 0;
    for (int i = 0; i < t.size(); i++) {
        ans += m % 10 * pow(2, i);
        m /= 10;
    }
    return ans;
    // return m;
}


int main() {
    int n;
    cin >> n;
    cout << complementBase10(n) << endl;
    return 0;
}