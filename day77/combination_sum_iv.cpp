#include<bits/stdc++.h>
using namespace std;

int combinationSum4(vector<int>& nums, int target){
    vector<int> dp(target+1);
    dp[0] = 1;
    for(int i=1; i<=target; i++){
        for(int n: nums){
            if(i>=n) dp[i]+=dp[i-n];
        }
    }
    return dp[target];
}

int main(){
    vector<int> nums = {1,2,3};
    int target = 4;
    cout<<combinationSum4(nums, target)<<endl;
    return 0;
}