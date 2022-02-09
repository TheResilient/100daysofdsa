#include<bits/stdc++.h>
using namespace std;

int findPairs(vector<int>& nums, int k) {
        vector<int> ans;
        int anss=0;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]-nums[j]>0 and nums[i]-nums[j]==k){
                    ans.push_back(1);
                    ans.push_back(1);
                    anss++;
                }
                if(nums[i]-nums[j]<0){
                    int a = nums[i]-nums[j];
                    a=a*(-1);
                    if(a==k){
                        anss++;
                        ans.push_back(1);
                        ans.push_back(1);
                    }
                }
            }
        }
        return ans.size()/2;
    }

int main(){
    vector<int> nums;
    int k;
    cin>>k;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        nums.push_back(x);
    }
    cout<<findPairs(nums, k);
    return 0;
}