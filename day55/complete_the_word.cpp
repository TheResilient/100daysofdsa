#include <bits/stdc++.h>
using namespace std;

string sort_lexicographically(string s) {
    sort(s.begin(), s.end());
    return s;
}



int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout<<sort_lexicographically(s)<<endl;
    int j=0;
    char capital_alphabets[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for(int i =0; i<n; i++) {
        if(s[i]==capital_alphabets[j]) {
            cout<<capital_alphabets[j]<<" ";
            j++;
        }
    }
    return 0;
}