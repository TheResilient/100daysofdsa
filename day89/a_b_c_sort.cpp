#include<bits/stdc++.h>
using namespace std;

int *insertX(int n, int arr[],
             int x, int pos)
{
    int i;

    // increase the size by 1
    n++;

    // shift elements forward
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    // insert x at pos
    arr[pos - 1] = x;

    return arr;
}

int main(){
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int b[n]=a;
        sort(b,b+n);
        int c[n]=a;
        for(int i=n-1; i>=0; i--){
            int x=c[i];
            int pos=n/2;
            c=insertX(n,c,x,pos);
        }
        int final[n];
        for(int i=0; i<n; i++)
        {
            final[i]=c[n/2];
            c.erase(c.begin()+n/2);
        }
        if(final==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}