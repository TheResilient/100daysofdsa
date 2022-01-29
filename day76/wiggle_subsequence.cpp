#include<bits/stdc++.h>
using namespace std;

int wiggleMaxLength(vector<int>& nums){
    int size = nums.size();
    if (size == 0)
        return 0;
    int up = 1, down = 1;

    for (int i = 1; i < size; ++i)
    {
        if (nums[i] > nums[i - 1])
        {
            up = down + 1;
        }
        else if (nums[i] < nums[i - 1])
        {
            down = up + 1;
        }
    }
    return max(up, down);
}

int main(){
    vector<int> nums = {1,17,5,10,13,15,10,5,16,8};
    cout<<wiggleMaxLength(nums);
    return 0;
}