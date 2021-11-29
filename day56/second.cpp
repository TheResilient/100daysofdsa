#include <bits/stdc++.h>
using namespace std;

long long teams(long long  mathematicians, long long programmers){
    long long  m = mathematicians;
    long long p = programmers;
    long long a = min(m,p);
    long long ans= a/2;
    long long x= (max(m,p)-a)/4;
    // cout<<x<<" "<<a<<" "<<ans<<" x a "<<endl;
    if(a%2!=0) x=x-1;
    // cout<<" x "<<x<<endl;
    if(x<=0) return ans;
    if(ans>=x) {
        ans+=x;
        return ans;
    }
    else return a;
    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long m,p;
        cin>>m>>p;
        cout<<teams(m,p)<<endl;
    }
}