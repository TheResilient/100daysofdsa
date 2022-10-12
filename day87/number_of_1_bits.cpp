#include<bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n)
{
    int count = 0;

    while (n)
    {
        n &= (n - 1);
        count++;
    }

    return count;
}

int main(){
    uint32_t k; cin>>k;
    cout<<hammingWeight(k)<<endl;
    return 0;
}
