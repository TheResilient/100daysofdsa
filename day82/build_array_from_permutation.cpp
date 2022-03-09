#include<bits/stdc++.h>
using namespace std;

vector<int> buildArray(vector<int>& nums){
    int n = nums.size();
    vector<int> res(n);
    for(int i=0; i<n; i++){
        res[i]=nums[nums[i]];
    }
    return res;
}

int main(){
    vector<int> nums = {1,0,2};
    vector<int> res = buildArray(nums);
    for(auto i : res){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}