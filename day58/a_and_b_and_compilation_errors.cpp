#include <bits/stdc++.h>
using namespace std;

// a_and_b_and_compilation_errors.cpp

void find_missing_element(long long arr[], long long brr[], long long crr[], int n){
        long long a=0;
        for(int i=0; i<n; i++){
            a+=arr[i];
        }
        long long b=0;
        for(int i=0; i<n-1; i++){
            b+=brr[i];
        }
        long long c=0;
        for(int i=0; i<n-2; i++){
            c+=crr[i];
        }
        cout<<a-b<<endl;
        cout<<b-c<<endl;
}

int main(){
    int n;
    cin>>n;
    long long arr[n], brr[n-1], crr[n-2];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        cin>>brr[i];
    }
    for(int i=0; i<n-2; i++){
        cin>>crr[i];
    }
    find_missing_element(arr, brr, crr, n);
}