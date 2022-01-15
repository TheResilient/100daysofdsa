#include <bits/stdc++.h>
using namespace std;

int jump(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return 1;
    vector<int> dp(n, 0);
    dp[0] = nums[0];
    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i-1], nums[i-1] + i);
    }
    return dp[n-1];
}

int main(){
    vector<int> nums = {2,3,1,1,4};
    cout<<jump(nums)<<endl;
}