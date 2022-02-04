#include<bits/stdc++.h>
using namespace std;

int fourSumCount(vector<int> & nums1, vector<int> & nums2, vector<int>& nums3, vector<int>& nums4){
    unordered_map<int, int> m;
    for(auto i: nums1)
        for(auto j: nums2)
            m[i+j]++;
    int res = 0;
    for(auto i: nums3)
        for(auto j: nums4)
            res += m[-i-j];
    return res;
}

int main(){
    vector<int> nums1 = {1,2};
    vector<int> nums2 = {-2,-1};
    vector<int> nums3 = {-1,2};
    vector<int> nums4 = {0,2};
    cout<<fourSumCount(nums1,nums2,nums3,nums4);
    return 0;
}