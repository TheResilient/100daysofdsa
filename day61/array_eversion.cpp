#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
        int m; cin>>m;
        int a[m];
        int max=INT_MIN;
        for(int i=0;i<m;i++) {
            cin>>a[i];
            if(a[i]>max) max=a[i];
        }
        int mx = max;
        int cur = m-1;
        int ans =0;
        while(a[cur]!=mx){
            int i=cur-1;
            while(a[i]<=a[cur]){
                i--;
            }
            cur=i;
            ans++;
        }
        cout<<ans<<endl;
    }
}
