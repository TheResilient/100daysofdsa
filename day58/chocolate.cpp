#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/617/B
// number of ways to divide chocolate such that it exactly contains 1 nut

int findones(int arr[], int n)
{
    int ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            ones++;
    }
    return ones;
}

void findpermutations_with_only_one_ones(int arr[], int n)
{
    int res = 1;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1) v.push_back(i);
    }
    if(v.size() == 0) cout<<0<<endl;
    else{
        for (int i = 1; i < v.size(); i++)
        {
         
            res *= (v[i] - v[i-1]);
            
        }
        cout<<res<<endl;
    }
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    findpermutations_with_only_one_ones(arr, n);
    return 0;
}