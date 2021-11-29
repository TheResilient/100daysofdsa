//boilerplate code
#include <bits/stdc++.h>
using namespace std;

int find_max_capacity(int a[], int b[], int n){
    int max_capacity = 0;
    int first_pass = 0;
    int max=0;
    for(int i = 0; i < n; i++){
        int exitatstop = a[i];
        int enteratstop = b[i];
        int remain = enteratstop - exitatstop;
        first_pass += remain;
        if(first_pass > max){
            max = first_pass;
        }
    }
    return max;
}

int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i]>> b[i];
    }
    cout << find_max_capacity(a, b, n) << endl;
    return 0;
}