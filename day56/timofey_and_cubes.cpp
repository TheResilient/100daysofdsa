#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll i,j,k;
    ll n,x;

    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n/2;i+=2)
    {
        swap(a[i],a[n-i-1]);
    }

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;

}