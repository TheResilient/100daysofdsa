#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) continue;
            else{
                if(i==0) break;
                else if(i==n-1) {
                    sum+=n;
                    break;
                }
                else if(a[i]&a[j]>0 and i<j){
                    int x;
                    x=a[i]^a[j];
                    sum+=x;
                }

            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) continue;
            else{
                if(i==0) break;
                else if(i==n-1) {
                    sum+=n;
                    break;
                }
                else if(a[i]&a[j]>0 and i>j){
                    int x;
                    x=a[i]^a[j];
                    sum+=x;
                }

            }
        }
    }
    cout<<sum%1000000007<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}