#include<bits/stdc++.h>
using namespace std;

double trimMean(vector<int>& arr)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int fivepercent = 5 * n / 100;
    vector<int> final;
    for(int i=fivepercent;i<n-fivepercent;i++)
    {
        final.push_back(arr[i]);
    }
    int sum = 0;
    for(int i=0;i<final.size();i++)
    {
        sum+=final[i];
    }
    
    return (double)sum/final.size();
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<fixed<<setprecision(1)<<trimMean(arr);
    return 0;
}