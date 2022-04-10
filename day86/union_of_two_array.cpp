#include<bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m){
    // int count=0;
    set<int> ans;
    for(int i=0; i<n; i++){
        ans.insert(a[i]);
    }
    for(int j=0; j<m; j++) ans.insert(b[j]);
    return ans.size();

}

int main(){
    // int n,m; cin>>n>>m;
    int a[]={1,2,3,4,5};
    int b[]={1,2,3};
    cout<<doUnion(a,5,b,3);
    return 0;

}