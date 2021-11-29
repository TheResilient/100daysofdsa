#include <bits/stdc++.h>
using namespace std;

void find(int arr[], int n){
    int temp=1;
    for(int i=0; i<n; i++){
        while(arr[i]%2==0){
            arr[i]/=2;
            temp*=2;
        }
    }
    sort(arr,arr+n);
    arr[n-1]*=temp;
    long sum=0;
    for(int i=0; i<n; i++)
        sum+=arr[i];
    cout<<sum<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        find(arr,n);
    }
    return 0;
        
}