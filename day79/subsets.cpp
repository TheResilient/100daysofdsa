#include<bits/stdc++.h>
using namespace std;

void subsets1(vector<int>nums, vector<int>temp, int index, vector<vector<int>>&ans){
    if(index == nums.size()){
        ans.push_back(temp);
        return;
    }
    subsets1(nums, temp, index+1, ans);
    temp.push_back(nums[index]);
    subsets1(nums, temp, index+1, ans);
    temp.pop_back();
}

vector<vector<int>> subsets(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int> temp;
    sort(nums.begin(), nums.end());
    subsets1(nums, temp, 0, ans);
    return ans;
}

int main(){
    vector<int> nums={1,2,3};
    for(int i=0; i<subsets(nums).size(); i++){
        for(int j=0; j<subsets(nums)[i].size(); j++){
            cout<<subsets(nums)[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0
}