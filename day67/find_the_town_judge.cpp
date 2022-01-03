#include <bits/stdc++.h>
using namespace std;

int findJudge(int n, vector<vector<int>>&trust){
    // map<int, int> m;
    // for (auto &t : trust) {
    //     m[t[0]]--;
    //     m[t[1]]++;
    // }
    // for (auto &p : m) {
    //     if (p.second == n - 1) return p.first;
    // }
    // return -1;
    vector<int> m(n + 1, 0);
    for (auto &t : trust) {
        m[t[0]]--;
        m[t[1]]++;
    }
    for (int i = 1; i <= n; i++) {
        if (m[i] == n - 1) return i;
    }
    return -1;
}

int main(){
    int n = 3;
    vector<vector<int>> trust = {{1,3},{2,3}};
    cout << findJudge(n, trust) << endl;
    return 0;
}