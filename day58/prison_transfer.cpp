#include <bits/stdc++.h>
using namespace std;

// void solve(){
//     int n,t,c;
//     cin >> n >> t >> c;
//     vector<int> a(n);
//     int count=0;
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     // sort(a.begin(), a.end());
//         if(a[i] <= t) count++;
//         else count=0;
        
//         if(count >= c) count++;
//     }
//     cout<<count<<endl;
//     // else cout<<"0"<<endl;
// }

int main(){
    long int x,ans,i,l,p,c,t,n;
    while(cin>>n>>t>>c)
    {
        ans=0;
        l=0;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            {
               if(x<=t)
                    l++;
               else
                    l=0;
            }
            if(l>=c)
                ans++;
        }
        cout<<ans<<endl;
     }
    return 0;
}