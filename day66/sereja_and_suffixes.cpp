#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,q; cin>>n>>m;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    // vector<int> b(m);
    // for(int i=0; i<m; i++) cin>>b[i];
    set<int> s;
    int result[n+1];
    for(int i=n-1; i>=0; i--) {
        s.insert(a[i]);
        result[i] = s.size();
    }
    while(m-->=1){
        cin>>q;
        cout<<result[q-1]<<endl;
    }
}

int main(){
    solve();
    return 0;
}