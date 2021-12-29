#include<bits/stdc++.h>
using namespace std;

int count(int arr[], int n, int k){
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==k) cnt++;
    }
    return cnt;
}

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int fre[300];
    for(int i=0; i<n; i++){
        fre[100+i]++;
    }
    set<int> hs;
    for(int i=0; i<300; i++){
        if(fre[i]==0){
            continue;
        }
        if(fre[i]==2){
            hs.insert(i-101);
            
        }
        else{
            hs.insert(i-101);
            hs.insert(101-i);
        }
    }
    cout<<hs.size()<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){

        solve();
    }
    return 0;
}