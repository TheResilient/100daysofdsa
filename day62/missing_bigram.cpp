#include <bits/stdc++.h>
using namespace std;

//ab bb ba aa ba --> abbaaba

void solve(){
    int n;
    cin>>n;
    string s="";
    vector<string> ss;
    cin>>ss[0];
    for(int i=1;i<n;i++){
        string c;
        cin>>c;
        if(c[1]!=ss[i-1][1]){
            s+=c;
        }
    }
}