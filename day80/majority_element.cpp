#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums){
    set<int> s;
    for(int i = 0; i < nums.size(); i++){
        if(s.find(nums[i]) == s.end()){
            s.insert(nums[i]);
        }
    }
    int count1=INT_MIN;
    int ans;
    set<int, greater<int>>::iterator i;
    for(i=s.begin(); i!=s.end(); i++){
        int count = 0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j] == *i){
                count++;
            }
        }
        if(count > count1){
            count1 = count;
            ans = *i;
        }

    }
    return ans;
}

int main(){
    vector<int> nums={8,9,8,9,8};
    cout<<majorityElement(nums)<<endl;
    return 0;
}