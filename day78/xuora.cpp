#include<bits/stdc++.h>
using namespace std;

void xuora(int n){
    vector<int> arr;
    int i=1;
    int j=2;
    while(n>0){
        while(j>i){
            if(i^j==0 and i!=j){
                arr.push_back(i);
                arr.push_back(j);
                n-=2;
            }
            i++;
        }
        j++;
    }
    for(int i=0; i<arr.size(); i++) cout<<arr[i]<<" ";
}

int main(){
    int n; cin>>n;
    xuora(n);
    return 0;
}