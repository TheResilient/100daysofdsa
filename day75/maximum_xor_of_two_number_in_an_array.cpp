#include<bits/stdc++.h>
using namespace std;

int findMaximumXOR(vector<int>& nums){
    int max_xor = 0, mask = 0;
    for(int i = 31; i >= 0; i--){
        mask = mask | (1 << i);
        unordered_set<int> s;
        for(int num : nums){
            s.insert(num & mask);
        }
        int tmp = max_xor | (1 << i);
        for(int prefix : s){
            if(s.count(tmp ^ prefix)){
                max_xor = tmp;
                break;
            }
        }
    }
    return max_xor;
}

int main(){
    vector<int> nums = {3, 10, 5, 25, 2, 8};
    cout << findMaximumXOR(nums) << endl;
    return 0;
}