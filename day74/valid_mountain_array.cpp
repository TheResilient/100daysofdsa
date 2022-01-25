#include<bits/stdc++.h>
using namespace std;

bool validMountainArray(vector<int>& A) {
    int n = A.size();
    int i = 0;
    while (i < n - 1 && A[i] < A[i + 1]) {
        i++;
    }
    if (i == 0 || i == n - 1) {
        return false;
    }
    i++;
    while(i<n){
        if(A[i]==A[i-1] or A[i]>A[i-1]){
            return false;
        }
        i++;
    }
    return true;
}

int main(){
    vector<int> A = {3,5,5};
    cout<<validMountainArray(A)<<endl;
}
