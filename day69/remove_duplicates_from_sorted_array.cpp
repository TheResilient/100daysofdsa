#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums){
    int n = nums.size();
    if(n<=1) return n;
    int i=0;
    for(int j=1; j<n; j++){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
        }
    }
    return i+1;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<removeDuplicates(nums)<<endl;

    return 0;
}