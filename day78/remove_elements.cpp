#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val){
    int count=0;
    int s=nums.size();
    vector<int>nums1;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==val) {
            count++;
        }
        else{
            nums1.push_back(nums[i]);
        }
    }
    nums=nums1;
    return s-count;
}

int main(){
    int val; cin>>val;
    vector<int> nums = {3,2,2,3};
    cout<<removeElement(nums, val);
    return 0;
}