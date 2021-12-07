#include <bits/stdc++.h>
using namespace std;

// 2 3 2 --> 1 3 2
void solve(){
    long long n,m;
    cin>>n;
    long long a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    long long x=1;
    for(int i=0; i<n; i++){
        if(a[i]==x) x++;
        else if(x<a[i]) {
            a[i]=x;
            x++;
        }
    }
    cout<<x<<endl;
}

int main(){solve();}