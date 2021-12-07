#include <bits/stdc++.h>
using namespace std;

void solve(){
    int k,n,w;
    cin>>k>>n>>w;
    int sum=0;
    for(int i=0; i<=w; i++){
        sum+=k*i;
    }
    if(sum>n) cout<<sum-n<<endl;
    else cout<<0<<endl;
}

int main(){
    solve();
}