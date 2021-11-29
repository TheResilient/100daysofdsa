#include <bits/stdc++.h>
using namespace std;

int find(int arr[], int n){
    sort(arr, arr+n);
    int maximum = arr[n-1];
    int minimum=INT_MAX;
    bool twos=false;
    int twoid;
    for(int i=0; i<n; i++){
        if(arr[i]==2) {
            twos=true;
            twoid=i;
            break;
        }
        if(arr[i]<minimum && arr[i]%2==0) {
            minimum=arr[i];
            
            break;

        }
    }
    if(twos){
        arr[twoid]=arr[twoid]/2;
    }
    else{
        arr[]=arr[n-1]/2;
    }

}

