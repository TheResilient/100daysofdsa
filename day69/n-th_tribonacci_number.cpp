#include <bits/stdc++.h>
using namespace std;

// int tribonacci(int n){
//     if(n==0) return 0;
//     if(n==1 or n==2) return 1;
//     return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
// }

// efficient method
long long tribonacci(int n){
    long long memo[37];
    for(int i=0; i<37; i++) memo[i] = -1;
    memo[0]=0;
    memo[1]=1;
    memo[2]=1;
    for(int i=3; i<=n; i++){
        memo[i] = memo[i-1] + memo[i-2] + memo[i-3];
    }
    return memo[n];
}

int main(){
    int n;
    cin>>n;
    cout<<tribonacci(n)<<endl;
    return 0;
}