#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k){
    int rotated_array[nums.size()];
    for(int i=0; i<nums.size(); i++){
        rotated_array[(i+k)%nums.size()]=nums[i];
    }
    for(int i=0; i<nums.size(); i++){
        nums[i]=rotated_array[i];
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k=3;
    rotate(nums, k);
    
    return 0;
}