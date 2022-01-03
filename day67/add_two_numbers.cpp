#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); i++) {
        if (hash.find(target - nums[i]) != hash.end()) {
            return vector<int>{hash[target - nums[i]], i};
        }
        hash[nums[i]] = i;
    }
    return vector<int>{};
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    vector<int> result = twoSum(nums, target);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}