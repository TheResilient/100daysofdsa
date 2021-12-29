#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]>max) max = arr[i];
        if(arr[i]<min) min = arr[i];
    }
    int max_indx;
    int min_indx;
    for(int i=0; i<n; i++){
        if(arr[i]==max) max_indx = i;
        if(arr[i]==min) min_indx = i;
    }
    if(max_indx>min_indx){
        cout<<(n-(min_indx+1)+(max_indx))-1<<endl;
    }
    else{
        cout<<(n-(min_indx+1)+(max_indx))<<endl;
    }

}

int main(){
    solve();
    return 0;
}