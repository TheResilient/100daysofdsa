#include <bits/stdc++.h>
using namespace std;

int shift_to_middle(int a, int b){
    int n = 5;
    int a1=2, b1=2;
    int diffa=a1-a, diffb=b1-b;
    if(diffa<0){
        diffa*=-1;
    }
    if(diffb<0){
        diffb*=-1;
    }
    return diffa+diffb;
}

// take input in 5X5 matrix

int main(){
    int arr[5][5];
    int a=0,b=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr[i][j]==1){
                a=i;
                b=j;
            }
        }
    }
    cout<<shift_to_middle(a,b);
    return 0;
}