#include <bits/stdc++.h>
using namespace std;

void input_string_in_set(string s, int n) {
    set<char> s1;
    for(int i=0; i<s.length(); i++) {
        s1.insert(s[i]);
    }
    cout<<n-s1.size()<<endl;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n>26) {
        cout<<-1<<endl;
        return 0;
    }
    input_string_in_set(s, n);
    return 0;
}