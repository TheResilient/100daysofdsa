#include <bits/stdc++.h>
using namespace std;

int numberOfArithmeticSlices(vector<int>& nums){
    int dp[nums.size()];
    memset(dp, 0, sizeof(dp));
    int res=0;
    for(int i=2; i<nums.size(); i++){
        if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
            dp[i]=1+dp[i-1];
            res+=dp[i];
        }
    }
    return res;
}

int main(){
    vector<int> nums={1,2,3,4};
    cout<<numberOfArithmeticSlices(nums)<<endl;
    return 0;
}