#include <bits/stdc++.h> 

using namespace std;

int check(int arr[], int brr[], int m){
    sort(arr, arr+m);
    sort(brr, brr+m);
    vector<int> v;
    vector<int> v1;
    for(int i=0; i<m; i++){
        if(arr[i] != brr[i]){
            v.push_back(arr[i]+1);
            v1.push_back(brr[i]);
        }
    }
    
    if(v==v1) return 1;
    else return 0;
}

int main(){
    int n;
    cin>>n;
    while(n>0){
        int m;
        cin>>m;
        int arr[m];
        int brr[m];
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        for(int i=0;i<m;i++){
            cin>>brr[i];
        }
        if(check(arr, brr, m)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        n--;
    }
}
