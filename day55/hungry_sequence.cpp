#include <bits/stdc++.h>
using namespace std;

void print_n_primes(int n) {
    int i=0;
    int k=n;
    while(n>0){
        cout<<k+i<<" ";
        i++;
        n--;
    }
}

int main(){
    int n;
    cin>>n;
    print_n_primes(n);
    return 0;
}