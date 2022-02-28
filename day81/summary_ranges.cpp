#include<bits/stdc++.h>
using namespace std;

vector<string> summaryRanges(vector<int>& nums){
    vector<string> res;
    if(nums.size()==0) return res;
    int i=0;
    while(i<nums.size()){
        int j=i+1;
        while(j<nums.size() && nums[j]==nums[j-1]+1) j++;
        if(j-i==1) res.push_back(to_string(nums[i]));
        else res.push_back(to_string(nums[i])+"->"+to_string(nums[j-1]));
        i=j;
    }
    return res;
    
}

int main(){
    vector<int> nums={0,1,2,4,5,7};
    vector<string> ans=summaryRanges(nums);
    for(auto x:ans)
        cout<<x<<" ";
    return 0;
}