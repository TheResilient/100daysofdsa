#include <bits/stdc++.h>
using namespace std;

// pattern printing 
//           0
//         0 1 0
//       0 1 2 1 0
//     0 1 2 3 2 1 0
//   0 1 2 3 4 3 2 1 0
// 0 1 2 3 4 5 4 3 2 1 0
//   0 1 2 3 4 3 2 1 0
//     0 1 2 3 2 1 0
//       0 1 2 1 0
//         0 1 0
//           0
void pattern(int n){
    int l=n;
    for(int k=0; k<=n; k++){
        for(int i=l; i>0; i--){
            cout<<"  ";
        }
        // cout<<"0"<<endl;
        for(int i=0; i<k; i++){
            cout<<i<<" ";
        }
        for(int i=k; i>=0; i--){
            cout<<i<<" ";
        }
        cout<<endl;
        l--;
    }
    int l1=0;
    for(int k=n; k>0; k--){
        cout<<"  ";
        // cout<<"0"<<endl;
        int z;
        for(int i=0; i<k; i++){
            cout<<i<<" ";
            z=i;
        }
        for(int i=z-1; i>=0; i--){
            cout<<i<<" ";
        }
        
        cout<<endl;
        l1++;
        for(int i=0; i<l1; i++){
            cout<<"  ";
        }
    }
}


int main(){
    int t;
    cin>>t;
    pattern(t);
}
