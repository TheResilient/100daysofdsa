#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<vector<int>>& nums){
    vector<int> res;
    if(nums.size()==0) return res;
    unordered_set<int> s;
    for(int i=0;i<nums[0].size();i++){
        s.insert(nums[0][i]);
    }
    for
    return res;
}

int main(){
    vector<vector<int>> nums = {{1,2,2,1},{2,2},{1,2,3}};
    vector<int> res = intersection(nums);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}
