#include <bits/stdc++.h>
using namespace std;
// #define mod 1000000007;

void solve(){
    int x,y,n;
    cin >> x >> y >> n;
    long long a[]={x,y,y-x, -x,-y,x-y};
    cout<<(a[(n-1)%6]%1000000007+1000000007)%1000000007;
    
}

int main(){solve();}