
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
{
    int x,y; cin>>x>>y;
    int b=y/x;
    int a=1;
    if(y%x!=0)
    {
        cout<<0<<" "<<0<<endl;
    }
    else
    {
        cout<<a<<" "<<b<<endl;
    }
}
    return 0;
}