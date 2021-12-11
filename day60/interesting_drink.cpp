#include <bits/stdc++.h>
#include <algorithm>
using namespace std;



void solve(){
    // int n;
    // cin >> n;
    // int a[n];
    // for(int i = 0; i < n; i++){
    //     cin >> a[i];
    // }
    // int m;
    // sort(a, a+n);
    // cin >> m;
    // for(int i = 0; i < m; i++){
    //     int x;
    //     cin >> x;
    //     cout<<binary_search(a, x, 0, n-1)+1<<endl;
    // }

    int m,n,i,j,k,ans;
    cin>>n;
    int a[n],p;
    int cnt=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    sort(a,a+n);
    while(m--)
    {
        cin>>k;
        ans=upper_bound(a,a+n, k)-a;
        cout<<ans<<endl;
    }
    
}

int main(){
    solve();
    return 0;
}