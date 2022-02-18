#include<bits/stdc++.h>
using namespace std;

void combinationSum1(vector<int>& candidates, int target, vector<int>& res, vector<vector<int>>&ans){
    if(target == 0){
        ans.push_back(res);
        return;
    }
    for(int i = 0; i < candidates.size(); i++){
        if(target - candidates[i] >= 0){

            res.push_back(candidates[i]);
            combinationSum1(candidates, target - candidates[i], res, ans);
            res.pop_back();
        }
    }

}

vector<vector<int>> combinationSum(vector<int>& candidates, int target){
    vector<vector<int>> ans;
    vector<int> temp;
    sort(candidates.begin(), candidates.end());
    combinationSum1(candidates, target,  temp, ans);
    vector<vector<int>> finalanswer;
    for(int i=0; i<ans.size(); i++){
        sort(ans[i].begin(), ans[i].end());
        if(find(finalanswer.begin(), finalanswer.end(), ans[i]) == finalanswer.end()){
            finalanswer.push_back(ans[i]);
        }
    }
    return finalanswer;
}

int main(){
    vector<int> candidates={2,3,6,7};
    int target=7;
    for(int i=0; i<combinationSum(candidates, target).size(); i++){
        for(int j=0; j<combinationSum(candidates,target)[i].size(); j++){
            cout<<combinationSum(candidates,target)[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}