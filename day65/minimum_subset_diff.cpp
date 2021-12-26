#include <bits/stdc++.h>
using namespace std;

int findMin(int arr[], int i, int sumCalculated, int sumTotal){
    if(i==0) return abs(sumTotal-2*sumCalculated);
    
    return min(findMin(arr, i-1, sumCalculated+arr[i], sumTotal), findMin(arr, i-1, sumCalculated, sumTotal));
}

int sumset(int arr[], int n){
    int sumTotal = 0;
    for(int i=0; i<n; i++){
        sumTotal+=arr[i];
    }
    return findMin(arr, n, 0, sumTotal);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<sumset(arr, n)<<endl;
}