#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>a, int n){
    
    //remove elements from array such that xor of any two elements should not be greater than 1

    int count = INT_MIN;
    for(int i=0; i<n; i++){
        int count1 = 0;
        for(int j=i+1; j<n; j++){
            if((a[i]^a[j])<=1){
                count1++;
            }
        }
        if(count1>count){
            count = count1;
        }
    }
    return n-count-1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        cout<<solve(a, n)<<endl;
    }
    return 0;
}