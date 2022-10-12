#include<bits/stdc++.h>
using namespace std;

// Find any isolated cell on the board. If there are no such cells, print any cell on the board.
vector<int> findisolation(int n, int m){
    // vector<int> ans;
    // if(n>3 and m>3) return {1,1};
    // if(n==1 or m==1) return {1,1};
    if(n==3 and m==3) return {2,2};
    if(n==3 or m==3) {
        if(n==3) return {2,1};
        else return {1,2};
    }
    
    return {1,1};
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        vector<int> ans=findisolation(n,m);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
}