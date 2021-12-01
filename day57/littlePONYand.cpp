#include <bits/stdc++.h>
using namespace std;


// void operations(int n, int arr[]){
//     int i=1;
//     while(n>1){
//         if(arr[i]>arr[i-1]) {
//             continue;
//             i++;
//         }
//         else break;
//         n--;
//     }
//     int brr[n];
//     int k=0;
//     for(int j=i; i<n; i++){
//         brr[k]=arr[i];
//         k++;
//     }
//     for(int j=0; j<i; j++){
//         brr[k]=arr[j];
//         k++;
//     }
//     for(int l=0; l<n; l++){
//         cout<<brr[l]<<" ";
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     operations(n, arr);
//     return 0;
// }

//little pony and sort by shift

int main(){
     int n, s, v(0);
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) if (a[i] > a[i + 1]) s = i, v++;
    if (a[n - 1] > a[0]) s = n - 1, v++;
    if (v == 0) cout << 0 << endl;
    else if (v > 1) cout << -1 << endl;
    else cout << n - 1 - s << endl;
    return 0;

}