#include<bits/stdc++.h>
using namespace std;

// trapping rain water using dp
int trap(vector<int>& height){
    int n = height.size();
    int l = 0;
    int r = n-1;
    int ans = 0;
    int lmax = 0;
    int rmax =0;
    while(l<r){
        lmax = max(lmax, height[l]);
        rmax = max(rmax, height[r]);
        if(lmax<rmax){
            ans += lmax - height[l];
            l++;
        }
        else{
            ans += rmax - height[r];
            r--;
        }
    }
    return ans;
    
}
//      -
// -    -
// -  - -
// -- ---
// -- ---


int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height)<<endl;
    return 0;
}