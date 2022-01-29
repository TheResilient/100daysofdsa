#include<bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& nums){
    vector<int> dp(nums.size(), 1);
    int max_len = 1;
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<i; j++){
            if(nums[j] < nums[i]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    int maxa=INT_MIN;
    for(int i=0; i<dp.size(); i++){
        maxa = max(maxa, dp[i]);
    }
    return maxa;
}

int main(){
    vector<int> nums = { 1, 3, 6, 7, 9, 4, 10, 5, 6 };
    cout<<lengthOfLIS(nums);
    return 0;
}