#include <bits/stdc++.h>
using namespace std;

// using dynamic programming

int fib(int n){
    if(n==1) return 1;
    if(n==0) return 0;
    return fib(n-1) + fib(n-2);
}

int fib2(int n){
    int first=1;
    int second=2;
    for(int i=0; i<n; i++){
        second=first+second;
    }
    return second;
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}
