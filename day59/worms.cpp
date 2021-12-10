#include <bits/stdc++.h>
using namespace std;

void binaryserach(int arr[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
        {
            cout << "Element found at index " << mid << endl;
            return;
        }
        else if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << "Element not found" << endl;
}

void solve(){
    int n;
    cin>>n;
    vector<long long> v;
    long long z;
    cin>>z;
    v.push_back(z);
    for(int i=1;i<n;i++){
        long long x;
        cin>>x;
        // cout<<x<<" ";
        // cout<<v[i-1]<<" ";
        v.push_back(v[i-1]+x);
    }
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int y; cin>>y;
        cout<<check(v,y)<<endl;
    }

}

int main(){
    solve();
    return 0;
}