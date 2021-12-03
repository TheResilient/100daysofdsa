#include <bits/stdc++.h>
using namespace std;

//beautiful conditions:
//1. an+1>an 



map<int,int> frequency;
int main(){
    int n;
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        frequency[x]++;
        c=max(c,frequency[x]);
    }
    cout<<n-c<<endl;
}