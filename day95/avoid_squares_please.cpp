// check if n is a perfect square

#include <bits/stdc++.h>
using namespace std;

//print a permutation of the array such that a[i]*a[i+1] is not a perfect square
//for all i from 1 to n
int main() {
    int t; cin>>t;
    while(t--){
        int n;
        cin >> n;
        while(n>0) {
            cout<<n<<" ";
            n--;
        }
        cout<<endl;
    }
    return 0;
}