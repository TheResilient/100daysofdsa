#include <bits/stdc++.h>
using namespace std;

int knapsack(int w, int n, int wt[], int val[]){
    if(n==0 | w==0) return 0;
    else if(wt[n-1]>w) return knapsack(w,n-1,wt,val);
    else{ 
        return max(knapsack(w,n-1,wt,val), knapsack(w-wt[n-1],n-1,wt,val)+val[n-1]);
    }
}

int main(){
    int w,n;
    cin>>w>>n;
    int wt[n], val[n];
    for(int i=0; i<n; i++){
        cin>>wt[i]>>val[i];
    }
    cout<<knapsack(w,n,wt,val)<<endl;
}