#include<bits/stdc++.h>
using namespace std;

int deleteAndEarn(vector<int>& nums) {
        vector<int> sums(10001, 0);
        int take = 0, skip = 0;
        for (int num : nums) sums[num] += num;
        for (int i = 0; i < 10001; ++i) {
            int takei = skip + sums[i];
            int skipi = max(skip, take);
            take = takei; skip = skipi;
        }
        return max(skip, take); 
}

int main(){
    vector<int> nums = {3,4,2};
    cout<<deleteAndEarn(nums)<<endl;
}