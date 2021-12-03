#include <bits/stdc++.h>
using namespace std;

int check(int n, int m, vector<int>arr) {   
    int remain = n%m;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] == remain) {
            return 0;
        }
    }
    return 1;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int b=0;
    //find pairs such that x != y and x % y appears in a
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i==j) break;
            
            if (a[i] != a[j] && check(a[i],a[j], a)) {
                cout<<a[i]<<" "<<a[j]<<endl;
                b = 1;
                break;
            }
        }
        if(b) {
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}