#include<bits/stdc++.h>
using namespace std;


int hIndex(vector<int> &citations)
{
    
    sort(citations.begin(), citations.end());
    int i = 0, n = citations.size();
    for(i; i<n; i++){
        if (citations[i] >= n - i)
            return n - i;
    }
    return 0;
}


int main(){
    vector<int>citations={1,3,1};
    cout<<hIndex(citations)<<endl;
    return 0;
}