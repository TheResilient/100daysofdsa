#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>threeSum(vector<int>&nums){
    vector<vector<int>>ans;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;
        int l = i + 1, r = nums.size() - 1;
        while(l < r){
            int sum = nums[i] + nums[l] + nums[r];
            if(sum == 0){
                ans.push_back({nums[i], nums[l], nums[r]});
                while(l < r && nums[l] == nums[l+1]) l++;
                while(l < r && nums[r] == nums[r-1]) r--;
                l++; r--;
            }else if(sum < 0){
                l++;
            }else{
                r--;
            }
        }
    }
    return ans;
}

int main(){
    vector<int>nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>>ans = threeSum(nums);
    for(auto i : ans){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}