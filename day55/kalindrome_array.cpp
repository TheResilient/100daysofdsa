#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(int v[], int n){
    for(int i=0;i<n/2;i++){
        if(v[i]!=v[n-i-1]) return false;
    }
    return true;
}

void convert_to_palindrome(int v[], int n){
    for(int i=0;i<n/2;i++){
        int temp = v[i];
        v[i] = v[n-i-1];
        v[n-i-1] = temp;
    }
}

//

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        vector<int> arr(k);
        for(int j=0; j<k; j++){
            cin>>arr[j];
        }
        if(check_palindrome(arr.data(), k)) {
            cout<<"YES"<<endl;
        }
        
    }
}