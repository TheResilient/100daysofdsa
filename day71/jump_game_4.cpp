#include <bits/stdc++.h>
using namespace std;

// jump game IV leetcode #1345 
// https://leetcode.com/problems/jump-game-iv/discuss/106400/C%2B%2B-DP-O(N)-time-O(1)-space-with-explanation

int minJumps(vector<int>& arr){
    int n = arr.size();
    if(n==0) return 0;
    if(n==1) return 1;
    vector<int> dp(n, INT_MAX);
    dp[0] = 0;
    for(int i=1; i<n; i++){
        for(int j=i-1; j>=0; j--){
            if(i<=j+arr[j]){
                dp[i] = min(dp[i], dp[j]+1);
                break;
            }
        }
    }
    return dp[n-1];
}



int main(){
    vector<int> arr = {100,-23,-23,404,100,23,23,23,3,404};
    cout<<minJumps(arr)<<endl;
}