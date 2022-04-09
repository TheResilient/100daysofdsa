#include <bits/stdc++.h>
using namespace std;

// vector<int>
// void topKFrequent(vector<int>& nums, int k){
//     unordered_map<int, int> mp;
//     for(int i=0; i<nums.size(); i++){
//         mp[nums[i]]++;
//     }
//     priority_queue<int, vector<int>, greater<int>> minheap;
//     for(auto i=mp.begin(); i!=mp.end(); i++){
//         minheap.push({i->second, i->first});
//         if(minheap.size()>k){
//             minheap.pop();
//         }
//     }
//     vector<int> ans;
//     while(k>0){
//         ans.push_back(minheap.top().second);
//         minheap.pop();
//         k--;
//     }
// }

vector<int> topKFrequent(vector<int> &nums, int k)
{
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        map[nums[i]]++;
    }

    vector<int> ans;
    priority_queue<pair<int, int>> pq;
    for (auto it = map.begin(); it != map.end(); it++)
    {
        pq.push(make_pair(it->second, it->first));
        if (pq.size() > (int)map.size() - k)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> ans = topKFrequent(nums, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}