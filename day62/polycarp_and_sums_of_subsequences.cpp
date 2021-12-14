#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    long long a[7];
    int max = INT_MIN;
    for(int i=0;i<7;i++){
        cin>>a[i];
        if(a[i]>max)
            max = a[i];
    }
    for(int i=0; i<7; i++){
        for(int j=i+1; j<7; j++){
            for(int k=j+1; k<7; k++){
                if(a[i]+a[j]+a[k]==max) {
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                    return;
                }
            }
        }
    }

    // for(int i=0; i<3; i++) cout<<a[i]<<" ";


}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}