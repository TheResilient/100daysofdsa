#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s, int k) {
    int n = s.size();
    if (n == 0) return "";
    int i = 0;
    int j = 0;
    while (j < n) {
        if (s[j] != s[i]) {
            i++;
            s[i] = s[j];
        }
        j += k;
    }
    return s.substr(0, i + 1);
}
