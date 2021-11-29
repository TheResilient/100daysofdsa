#include <bits/stdc++.h>
using namespace std;

int find_max_cards(int arr[], int x, int n){
    int sum=0;
    for(int i = 0; i < n; i++){
        sum+=arr[i];
    }
    if(sum==0) return 0;
    int k=sum;
    if(k<0) {
        k*=-1;
    }

    if(k%x==0) return k/x;
    else return k/x+1;
}

int main(){
    int n,x;
    cin >> n >> x;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << find_max_cards(arr, x, n) << endl;
    return 0;
}