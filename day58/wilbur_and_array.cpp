#include <bits/stdc++.h>
using namespace std;

// Wilbur and Array

int wilbur_and_array(int a[], int n) {
    int ans = 0;
    for(int i=0; i<n; i++){
        if(i>0) ans+=abs(a[i]-a[i-1]);
        else ans+=abs(a[i]);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << wilbur_and_array(arr, n) << endl;
    return 0;
}