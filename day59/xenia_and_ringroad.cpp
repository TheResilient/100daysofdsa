#include <bits/stdc++.h>
using namespace std;

//4 3 , 3 2 3 ----> 1->2->3->4->1->2->3
//4 3 , 2 3 3 ----> 1->2->3                
// xenia and ringroad

void solve(){
    int n,m;
    cin>>n>>m;
    int initial=1;
    // vector<int> v;
    // for(int i=0;i<m;i++)
    //     cin>>v[i];
    int ans=0;               // ans=3
    for(int i=0; i<m; i++){
        // if(v[i]<v[i-1]){        // v[i]=2 v[i-1]=3 ---> 
        //     ans+=n-v[i-1];      // ans=3+(4-3)=4
        //     ans+=v[i];          // ans= ans + 2 = 6
        // }
        // else{
        //     ans+=v[i]-v[i-1];
        // }
        int x;
        cin>>x;
        ans+=((x-initial+n)%n);
        initial = x;
    }
    cout<<ans<<endl;
}

int main(){ solve(); return 0; }