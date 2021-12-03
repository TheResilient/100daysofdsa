#include <bits/stdc++.h>
using namespace std;

// vanya and lanterns
// https://codeforces.com/contest/1337/problem/B

void solve() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    //0,3,5,7,9,14,15
    //3,2,2,2,5,1
    double max_diff = DBL_MIN;
    for(int i=0; i<n-1; i++){
        if(a[i+1]-a[i]>max_diff){
            max_diff = a[i+1]-a[i];
        }
    }
    double first_diff = a[0];
    double last_diff = m-a[n-1];
    double ans = 2*max(first_diff, last_diff);
    ans = max(ans, max_diff)/2;
    cout<<fixed<<setprecision(10)<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}