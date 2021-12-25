#include <bits/stdc++.h>
using namespace std;

long long pt(long long n){
    long long count =-1;
    while(n!=0){
        n/=2;
        count++;
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        long long pw = pt(r);
        long long ans1 = r-pow(2,pw)+1; 
        long long ans2 = pow(2,pw)- pow(2,pw-1);
        long long mx = max(ans1*1LL, ans2*1LL);
        long long ans3=((r-l+1)%2 ? ((r-l+1)/2+1) : (r-l+1)/2);
        mx=max(mx,ans3*1LL);
        cout<<(r-l+1)-mx<<endl;
    }
}