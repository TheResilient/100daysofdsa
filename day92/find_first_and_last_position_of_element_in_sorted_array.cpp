#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int target, bool lbias){
    int l=0,r=nums.size()-1;
    int i=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(target>nums[m]) l=m+1;
        else if(target<nums[m]) r=m-1;
        else{
            i=m;
            if(lbias) r=m-1;
            else l=m+1;
        }
    }
    return i;
}

vector<int> searchRange(vector<int>& nums, int target){
    int left=binarySearch(nums, target, true);
    int right=binarySearch(nums, target, false);
    return {left, right};
}