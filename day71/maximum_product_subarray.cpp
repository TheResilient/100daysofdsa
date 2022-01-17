#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums){
    int max_product = nums[0];
    int min_product = nums[0];
    int max_product_here = nums[0];
    int min_product_here = nums[0];
    for(int i=1;i<nums.size();i++){
        int temp = max_product_here;
        max_product_here = max(max(max_product_here*nums[i],min_product_here*nums[i]),nums[i]);
        min_product_here = min(min(temp*nums[i],min_product_here*nums[i]),nums[i]);
        max_product = max(max_product,max_product_here);
    }
    return max_product;
}

int main(){
    vector<int> nums = {-4,-3,-2};
    cout<<maxProduct(nums)<<endl;
    return 0;
}