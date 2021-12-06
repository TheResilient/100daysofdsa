#include <bits/stdc++.h>
using namespace std;

// check if any of the elements form a triangle
// bool istriangle(long long arr[], int n){
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             for(int k=j+1; k<n; k++){
//                 if(arr[i]+arr[j]>arr[k] && arr[i]+arr[k]>arr[j] && arr[j]+arr[k]>arr[i])
//                     return true;
//             }
//         }
//     }
//     return false;
// }

//optimal way
bool istriangle(long long arr[], int n){
    sort(arr, arr+n);
    for(int i=0; i<n-2; i++){
        if(arr[i]+arr[i+1]>arr[i+2])
            return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    if(istriangle(arr, n))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}