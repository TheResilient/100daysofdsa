#include<bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int>& nums){
    int n = nums.size();
    vector<int> res(n*2);
    for(int i=0; i<n; i++){
        res[i] = nums[i];
    }
    for(int i=0; i<n; i++){
        res[n+i] = nums[i];
    }
    return res;
}

int main(){
    vector<int> nums = {1,0,2};
    vector<int> res = getConcatenation(nums);
    for(auto i : res){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}