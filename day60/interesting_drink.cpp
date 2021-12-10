#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m;
    sort(a.begin(), a.end());
    cin >> m;
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        
        auto itr = find(a, a + n, x);
        }
    }
}