#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> permute(vector<int>& nums){
    // find all permutations of given vector
    vector<vector<int>> ans;
    if(nums.size() == 0){
        return ans;
    }
    if(nums.size() == 1){
        ans.push_back(nums);
        return ans;
    }
    for(int i = 0; i < nums.size(); i++){
        vector<int> temp = nums;
        temp.erase(temp.begin()+i);
        vector<vector<int>> temp_ans = permute(temp);
        for(int j = 0; j < temp_ans.size(); j++){
            temp_ans[j].insert(temp_ans[j].begin(), nums[i]);
            ans.push_back(temp_ans[j]);
        }
    }
    return ans;
}

int main(){
    vector<int> nums={1,2,3};
    vector<vector<int>> ans = permute(nums);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}