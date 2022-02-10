#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val){
    int count=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==val) count++;
    }
    return nums.size()-count;
}

int main(){
    int val; cin>>val;
    vector<int> nums = {3,2,2,3};
    cout<<removeElement(nums, val);
    return 0;
}