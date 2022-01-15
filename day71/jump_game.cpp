#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums){
    int n = nums.size();
    if (n == 0) return false;
    if (n == 1) return true;
    vector<int> dp(n, 0);
    dp[0] = nums[0];
    for (int i = 1; i < n; i++) {
        if (dp[i-1] == 0) return false;
        dp[i] = max(dp[i-1] - 1, nums[i]);
    }
    return true;
}

int main(){
    vector<int> nums = {2,3,1,1,4};
    cout<<canJump(nums)<<endl;
}