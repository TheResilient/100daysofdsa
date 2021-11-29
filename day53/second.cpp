#include <bits/stdc++.h> 

using namespace std;

long long gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

int main(){
    int n;
    cin>>n;
    while(n>0){
        long long u,v;
        cin>>u>>v;
        long long hcf = gcd(u*u,v*v);
        cout<<-1*(u*u)/hcf<< " "<<(v*v)/hcf<<endl;
        n--;
    }
}
