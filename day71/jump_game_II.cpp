#include <bits/stdc++.h>
using namespace std;

int jump(vector<int>& nums) {
    int curReach =0;
    int curMax=0;
    int jumps=0;
    for(int i=0; i<nums.size()-1; i++){
        if(i+nums[i]>curReach){
            curReach=i+nums[i];
        }
        if(i==curMax){
            jumps++;
            curMax=curReach;
        }
    }
    return jumps;
}

int main(){
    vector<int> nums = {2,3,1,1,4};
    cout<<jump(nums)<<endl;
}