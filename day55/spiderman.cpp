#include <bits/stdc++.h>
using namespace std;

void findwinner(int arr[], int n){
    int chance=1;
    
    for(int j=0; j<n; j++){
        while(arr[j]>0){
            chance++;
            arr[j]--;
        }
        chance=chance%2;
        if(chance == 1){
            cout<<1<<endl;
        }
        else cout<<2<<endl;
        chance++;
    }
    // if(chance ==0) return 2;
    // else return 1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // cout<<endl;
    findwinner(arr, n);
    return 0;
}