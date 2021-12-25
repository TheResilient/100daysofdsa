#include <bits/stdc++.h>
using namespace std;

// area of triangle using coordinates
// double area(double x1, double y1, double x2, double y2, double x3, double y3) {
//     return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
// }

void solve(){
    long long w,h,x; cin>>w>>h;
    long long n;
    long long mx = LONG_LONG_MIN;
    for(int i=0; i<4; i++){
        cin>>n;
        long long d=0;
        for(int j=0; j<n; j++){
            cin>>x;
            if(j==0) d=x;
            else if(j==n-1) d=x-d;
        }
        if(i<2) d*=h;
        else d*=w;
        mx=max(mx,d);
    }
    cout<<mx<<endl;

}

int main(){

    int t; cin>>t;
    while(t--) solve();
    return 0;
}

