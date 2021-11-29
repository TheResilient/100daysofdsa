//sherlock and his girlfriend
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>

using namespace std;

void sherlock_and_his_girlfriend(int arr[], int n){
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
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        arr[i]=i+2;
    }
    sherlock_and_his_girlfriend(arr, n);
    return 0;
}