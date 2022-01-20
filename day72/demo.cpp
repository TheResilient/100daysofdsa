#include <bits/stdc++.h>
using namespace std;

long long array_xor(vector<long long>arr, int n){
    long long xorx =0;
    for(int i=0; i<n; i++){
        xorx = xorx^arr[i];
    }
    long long ma = pow(2,32)-1;
    long long k = ma^xorx;
    return k;

}

void Maximum_xor(vector<long long>arr, int n){
    sort(arr.begin(), arr.end());
    while(n>0){
        cout<<array_xor(arr, n)<<endl;
        arr.pop_back();
        n--;
    }
}

int main(){
    int n;
    cin>>n;
    vector<long long>arr;
    for(int i=0; i<n; i++){
        long long x;
        cin>>x;
        arr.push_back(x);
    }
    Maximum_xor(arr, n);
    return 0;
}