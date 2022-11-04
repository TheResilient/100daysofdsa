#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

long long solve(long long arr[], long long n){
    long long max=0;
    // cout<<"m "<<max<<endl;
    long long diff=0;
    for(int i=0; i<n; i++){
        if(max+arr[i]>max){
            max=max+arr[i];
            // cout<<"m1 "<<max<<endl;
        }
        else {
            diff=diff+arr[i];
            // cout<<"d1 "<<diff<<endl;
        }
    }
    // cout<<"d "<<diff<<endl;
    return abs(abs(max)-abs(diff));
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        a[n]=0;
        sort(a,a+n+1);
        cout<<solve(a,n+1)<<endl;
        
    }
    return 0;
}
