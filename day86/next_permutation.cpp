#include<bits/stdc++.h>
using namespace std;

int next_permutation(vector<int>& nums) {
    int n = nums.size();
    if(n == 0) return 0;
    int i = n - 2;
    while(i >= 0 && nums[i] >= nums[i + 1]) i--;
    if(i < 0) return 0;
    int j = n - 1;
    while(j >= 0 && nums[j] <= nums[i]) j--;
    swap(nums[i], nums[j]);
    reverse(nums.begin() + i + 1, nums.end());
    return 1;
    
}

