#include<bits/stdc++.h>
using namespace std;

// for negative elements

void kadane(vector<int> nums){
    int n=nums.size();
    int maxsum,cursum=0;
    for(int i=0; i<n; i++){
        cursum=cursum+nums[i];
        if(cursum>maxsum){
            maxsum=cursum;
        }
        if(cursum<0){
            cursum=0;
        }
    }
    cout<< maxsum<<endl;
}

int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    kadane(nums);
    return 0;
}