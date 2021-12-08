#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    long long arr[n+1];
    arr[0] = 0;
    long long brr[n];
    for(int i=1;i<n+1;i++){
        int k;
        cin>>k;
        brr[i-1] = k;
        arr[i]=arr[i-1]+k;
    }
    sort(brr,brr+n);
    long long crr[n+1]={0};
    for(int i=1; i<n+1; i++){
        crr[i] = crr[i-1]+brr[i-1];
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        int l,r,type;
        cin>>type>>l>>r;
        if(type == 2) cout<<crr[r]-crr[l-1]<<endl;
        else cout<<arr[r]-arr[l-1]<<endl;
    }

}

int main(){
    solve();
}