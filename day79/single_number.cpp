#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums){
    // find single number in given vector
    int res = 0;
    for(int i = 0; i < nums.size(); i++){
        res ^= nums[i];
    }
    
    cout<<ans<<endl;
    return res;
}

int main(){
    vector<int> nums={1,2,2,3,3,4,4,5,5};
    cout<<singleNumber(nums)<<endl;
    return 0;
}