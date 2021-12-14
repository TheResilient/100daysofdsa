#include <bits/stdc++.h>
using namespace std;

//paint the array

void solve(){
    int n; cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0; i<n;i++){
        int kk=0;
        for(int j=0; j<n; j=j+2){
            if(a[j]%a[i]==0){
                kk++;
            }
            if(kk==n) {
                cout<<a[i]<<endl;
                return;
            }
        }
        int jj=0;
        for(int k=1; k<n; k=k+2){
            if(a[k]%a[i]==0){
                jj++;
            }
            if(jj==n) {
                cout<<a[i]<<endl;
                return;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}