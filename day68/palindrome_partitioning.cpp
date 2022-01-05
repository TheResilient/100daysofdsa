#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void print_partition(string &s, int start, vector<vector<string>> &res, vector<string> &cur) {
    if (start == s.size()) {
        res.push_back(cur);
        return;
    }
    for (int i = start; i < s.size(); i++) {
        if (is_palindrome(s, start, i)) {
            cur.push_back(s.substr(start, i - start + 1));
            print_partition(s, i + 1, res, cur);
            cur.pop_back();
        }
    }
}


vector<vector<string>> partition(string s) {
    vector<vector<string>> res;
    vector<string> path;
    print_partition(s, 0, res, path);
    return res;
}

int main(){
    string s = "aab";
    vector<vector<string>> res = partition(s);
    for (auto &v : res) {
        for (auto &s : v) {
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}