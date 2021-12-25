#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n; cin>>n;
        long long sum=0;
        for(long long i =0; i<n; i++){
            long long x; cin>>x;
            sum+=x;
        }
        long long min = sum/n, max = ceil((double)sum/n);
        cout<<max-min<<endl;
    }
}