#include <bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int> &stones)
{
    while (stones.size() > 1)
    {
        sort(stones.begin(), stones.end());
        int a = stones.back();
        stones.pop_back();
        int b = stones.back();
        stones.pop_back();
        if (a != b)
        {
            stones.push_back(a - b);
        }
    }
    if (stones.size() == 0)
        return 0;
    return stones[0];
}

int main(){
    vector<int> stones={2,7,4,1,8,1};
    cout<<lastStoneWeight(stones)<<endl;
    return 0;
}