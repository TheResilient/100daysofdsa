#include<bits/stdc++.h>
using namespace std;

int maxOperations(vector<int> &num, int k)
{
    sort(num.begin(), num.end());
    int ans = 0;
    int i = 0, j = num.size() - 1;
    while (i < j)
    {
        if (num[i] + num[j] == k)
        { // found elements just increase counter
            ans++;
            i++;
            j--;
        }
        else if (num[i] + num[j] > k)
            j--; // sum is large so decrease the bigger element, i.e. jth element
        else
            i++; // sum is small so increase the smaller element, i.e. ith element
    }
    return ans;
}


int main()
{
    vector<int> num = {1, 2, 3, 4, 5};
    int k = 4;
    cout << maxOperations(num, k);
    return 0;
}
