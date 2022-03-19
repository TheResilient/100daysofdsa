#include<bits/stdc++.h>
using namespace std;

int findNum(int n){
    if(n%10 and n%5){
        if(n%10>5) return n + (10 - n%10);
        else return n - (n%10);
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    cout<<findNum(n);
    return 0;
}