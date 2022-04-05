#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return 1;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0;
}

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    // find all possible quadruplets with target sum
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // for (int k = j + 1; k < n; k++)
            // {
            //     if (i != j and i != k)
            //     {
            //         vector<int> rem;
            //         int sum = nums[i] + nums[j] + nums[k];
            //         int remain = target - sum;
            //         for (int l = k; l < n; l++) 
            //             rem.push_back(nums[l]);
            //         if (binary_search(rem, remain) and nums[i]!=nums[j] and nums[i]!=remain and nums[j]!=remain)
            //         {
            //             res.push_back({nums[i], nums[j], nums[k], remain});
            //         }
            //     }
            // }

            int target2=target-nums[j]-nums[i];
            
        }
    }
    return res;
}

int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> ans = fourSum(nums, target);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}