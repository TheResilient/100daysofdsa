#include <bits/stdc++.h>
using namespace std;

// life of a flower

void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m; cin>>m;
        int a[m];
        int c=1;
        cin>>a[0];
        if(a[0]==1){
            c++;
        }
        for(int j=1;j<m;j++){
            cin>>a[j];
            // if(a[j-1]==a[j]){
            //     c+=5;
            //     // break;
            // }
            // if(a[j-1]==0 && a[j]==0) {
            //     cout<<-1<<endl;
            //     break;
            // }
            // if(a[j-1]==0 && a[j]==1) {
            //     c++;
            //     // break;
            // }
        }
        bool flag=true;
        for(int j=1; j<m; j++){
            if(a[j-1]==1 && a[j]==1){
                c+=5;
                // break;
            }
            else if(a[j-1]==0 && a[j]==0) {
                flag=false;
                break;
                
            }
            else if(a[j-1]==0 && a[j]==1) {
                c++;
                // break;
            }
        }
        if(flag){
            cout<<c<<endl;       }
        else{ cout<<-1<<endl; }
    }
}

int main(){solve();
    return 0;
}