#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>c;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        c.push_back(x);
    }
    int bit=c[0];
    for(int i=1; i<n; i++){
        bit=bit^c[i];
    }
    cout<<bit<<endl;

    return 0;
}