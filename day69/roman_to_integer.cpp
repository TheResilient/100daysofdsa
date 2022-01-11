#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s){
    unordered_map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    int res = 0;
    for (int i = 0; i < s.size(); i++){
        if (i + 1 < s.size() && m[s[i]] < m[s[i + 1]]){
            res -= m[s[i]];
        } else {
            res += m[s[i]];
        }
    }
    return res;
}

int main(){
    
    string s;
    cin >> s;
    cout << romanToInt(s) << endl;
    return 0;
}