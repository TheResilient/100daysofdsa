//to string that does not contain "BAN"
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        
            if(n%2==0) cout<<n/2<<endl;
            else cout<<n/2+1<<endl;
            int j=0;
            for(int i=1; i<=n; i++){
                int pivot=3*i;
                
                cout<<pivot-j<<" ";
                if(j==2) j=0;
                else if(j==0) j=1;
                else if(j==1) j=2;
            }
            if(n%2!=0){
                cout<<n*3-j;
                cout<<endl;
                // cout<<j<<endl;
            }
        
    }
    return 0;
}