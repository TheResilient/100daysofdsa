#include <bits/stdc++.h>
using namespace std;

// int rob(vector<int>& nums){
//     int n = nums.size();
//     if (n == 0) return 0;
//     if (n == 1) return nums[0];
//     if (n == 2) return max(nums[0], nums[1]);
//     if (n==3) return max(nums[1], max(nums[0], nums[2]));
//     int sum=0;
//     for(int i=0; i<n-1; i+=2){
//         sum+=nums[i];
//     }
//     int sum1=0;
//     for(int i=1; i<n; i+=2){
//         sum1+=nums[i];
//     }
//     return max(sum, sum1);
    
// }


// All houses at this place are arranged in a circle.
// The only thing we need to know is the starting position of the thief.
// The thief has to steal the maximal amount of money from these houses.
// Given a list of non-negative integers representing the amount of money of each house,
// determine the maximum amount of money the thief can rob tonight without alerting the police.
int robLinear(int l , int r , vector <int> &a)
{
    int inc = 0 , exc = 0 , temp;
    for(int i = l ; i <= r ; i++)
    {
        temp = max(inc , exc);
        inc = exc + a[i];
        exc = temp;
    }
    return max(inc , exc);
}
int rob(vector <int> &a)
{
    int n = a.size();
    if(n == 0)
        return 0;
    if(n == 1)
        return a[0];
    return max(robLinear(0 , n - 2 , a) , robLinear(1 , n - 1 , a));
}

int main(){
    vector<int> nums = {1,3,1,3,100};
    cout<<rob(nums)<<endl;
}