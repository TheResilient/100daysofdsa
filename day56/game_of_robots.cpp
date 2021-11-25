#include <bits/stdc++.h>
using namespace std;

// long long find(long long arr[], int n, int k){
//     int i=0;
//     int m=0;
//     while(i<k){
//         for(int j=0; j<m; j++){
//             if(i=k-1){
//                 return arr[j+1];
//             }
//             i++;
//         }
//         m++;
//     }
//     return -1;
// }

int main(){
    long long i,n,m,j,ans,x,pos;
    while(cin>>n>>m)
    {
        long long a[n+1];
        for(i=1;i<=n;i++){
            cin>>a[i];
        }
        for(i=1;;i++){
            if(i*(i+1)/2==m)
            {
                pos=i;
                break;
            }
            if(i*(i+1)/2>m)
            {
             pos=m-(i*(i-1)/2);
             break;
            }
        }
        cout<<a[pos]<<endl;
    }
    return 0;
}