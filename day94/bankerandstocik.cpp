#include<bits/stdc++.h>
using namespace std;

// if odd divisors of n are more than even then sell, if even more than odd then buy, else do nothing
string buyorsell(long n){
    int odd=0, even=0;
    //optimization
    for(int i=1; i<=sqrt(sqrt(n)); i++){
        if(n%i==0){
            if(i%2==0) even++;
            else odd++;
            if(n/i!=i){
                if((n/i)%2==0) even++;
                else odd++;
            }
        }
    }
    if(odd>even) return "SELL";
    else if(even>odd) return "BUY";
    return "PASS";
}

int main(){
    int t; cin>>t;
    while(t--){
        long n; cin>>n;
        cout<<buyorsell(n)<<endl;
    }
}