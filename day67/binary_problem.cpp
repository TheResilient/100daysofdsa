#include <bits/stdc++.h>
using namespace std;
#define N 10e9 + 7

// 3 
// 2 1 2

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;

    
    for(int i=0; i<n; i++){
        int start=0;
        int end=0;    
        // if(i==1) sum+=0;
            for(int j=0; j<i; j++){
                // if(i==0)break;
                if((a[j]&a[i])>0){
                    start=1;                
                    break;
                }
            }
            for(int k=i+1; k<n; k++){
                // if(i==n-1){
                //     sum+=n;
                //     break;
                // }
                if((a[i]&a[k])>0){
                    end=1;
                    break;
                }
            }
            if(start){
                for(int j=0; j<i; j++){
                    sum+=a[i]^a[j];
                }
            }
            if(end){
                for(int j=i+1; j<n; j++){
                    sum+=a[i]^a[j];
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