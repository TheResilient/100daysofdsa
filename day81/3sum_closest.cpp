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

int threesumclosest(vector<int>& nums, int target){
    sort(nums.begin(), nums.end());
    int min=INT_MAX;
    int ans;
    int size = nums.size();
     for (int i = 0; i <size-2; i++){
        for(int j=i+1; j<size-1; j++){
            for(int k=j+1; k<size; k++){
                int sum = nums[i] + nums[j] + nums[k];
                if(abs(sum-target)<min){
                    min = abs(sum-target);
                    ans = sum;
                    // cout<<sum<<endl;
                }
            }
        }
     }
     return ans;
}

int main(){
    vector<int> nums={0,0,0};
    int target=1;
    int ans=threesumclosest(nums, target);
    cout<<ans<<endl;
    return 0;
}