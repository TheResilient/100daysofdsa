#include <bits/stdc++.h>
using namespace std;

int maxSubarraySumCircular(vector<int>& A){
    int sum = 0, mn = INT_MAX, mx = INT_MIN, curMax = 0, curMin = 0;
    for (int num : A) {
       curMin = min(curMin + num, num);
       mn = min(mn, curMin);
       curMax = max(curMax + num, num);
       mx = max(mx, curMax);
       sum += num;
    }
    //if(sum-mn==0) return mx; else return max(mx,sum-mn);
    return (sum - mn == 0) ? mx : max(mx, sum - mn);
}

int main(){
    vector<int> nums = {3,-1,2,-1};
    cout<<maxSubarraySumCircular(nums)<<endl;
    return 0;
}