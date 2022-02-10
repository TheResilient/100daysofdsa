#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target){
    if(target<=nums[0]) return 0;
    else if(target>nums[nums.size()-1]) return nums.size();
    else if(target==nums[nums.size()-1]) return nums.size()-1;
    for(int i=0; i<nums.size()-1; i++){
        if(target>=nums[i] and target<=nums[i+1]){
            return i+1;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,3,5,6};
    int val=7;
    cout<<searchInsert(nums, val);
    return 0;
}