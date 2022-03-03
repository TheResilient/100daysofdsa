#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    int n=nums.size();
    int ans=nums[0]+nums[1]+nums[2];
    sort(nums.begin(), nums.end());
    for(int i=0; i<n-2; i++){
        int j=i+1, k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(abs(sum-target)<abs(ans-target)) ans=sum;
            if(sum<target) j++;
            else k--;
        }
    }
    return ans;
}



int main(){
    vector<int> nums={-1,2,1,-4};
    int target=1;
    int ans=threeSumClosest(nums, target);
    cout<<ans<<endl;
    return 0;
}