#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target){
    sort(nums.begin(), nums.end());
    int min=INT_MAX;
    int ans;
    for(int i=0; i<nums.size(); i++){
        int first=nums[i];
        int start=i+1;
        int end=nums.size()-1;
        while(start<end){
            int sum=first+nums[start]+nums[end];
            if(sum==target){
                return sum;
            }
            else if(abs(sum-target)<min){
                min=abs(sum-target);
                ans=sum;
            }
            if(sum>target) end--;
            else start++;
        }
    }
    return ans;
}

int main(){
    vector<int> nums={-1,2,1,-4};
    int target=1;
    cout<<threeSumClosest(nums,target);
    return 0;
}