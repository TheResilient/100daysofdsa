#include <bits/stdc++.h>
using namespace std;

// int getMaxLen(vector<int>& nums){
//     int max_len = 0;
//     int cur_len = 0;
//     for(int i=0;i<nums.size();i++){
//         if(nums[i] == 0){
//             max_len = max(max_len,cur_len);
//             cur_len = 0;
//         }else{
//             cur_len++;
//         }
//     }
//     return max(max_len,cur_len);
// }

int getMaxLen(vector<int>& nums){
    int max_len = 0;
    int cur_len = 0;
    int left = 0;
    int right = 0;
    while(right < nums.size()){
        if(nums[right] == 0){
            max_len = max(max_len,cur_len);
            cur_len = 0;
            right++;
        }else{
            cur_len++;
            right++;
        }
    }
    return max(max_len,cur_len);
}

int main(){
    vector<int> nums={0,1,-2,-3,-4};
    cout<<getMaxLen(nums)<<endl;
    return 0;

}