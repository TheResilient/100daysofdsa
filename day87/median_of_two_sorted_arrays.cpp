#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int i, j, k = 0;
    int nums3[nums1.size() + nums2.size()];
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] < nums2[j])
        {
            nums3[k++] = nums1[i++];
        }
        else
        {
            nums3[k++] = nums2[j++];
        }
    }
    while (i < nums1.size())
    {
        nums3[k++] = nums1[i++];
    }
    while (j < nums2.size())
    {
        nums3[k++] = nums2[j++];
    }
    if(k%2==0){
        // cout << "-->"<<(nums3[k / 2 - 1] + nums3[k / 2]) / 2.0<<endl;
        return (nums3[k/2-1]+nums3[k/2])/2.0;
    }
    // cout<<"-->"<<nums3[k/2]<<endl;
    return nums3[k/2];
    // return (k % 2 == 0) ? (nums3[k / 2] + nums3[k / 2 - 1]) / 2.0 : nums3[k / 2];
}

int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    cout << findMedianSortedArrays(nums1, nums2);
    return 0;
}