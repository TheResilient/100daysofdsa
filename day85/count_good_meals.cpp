#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}

int countPairs(vector<int>& deliciousness){
    vector<vector<int>> res;
    for(int i=0; i<deliciousness.size()-1; i++){
        for(int j=i+1; j<deliciousness.size(); j++){
            if(isPowerOfTwo(deliciousness[i]+deliciousness[j]) ){
                res.push_back({deliciousness[i],deliciousness[j]});
            }
        }
    }
    return res.size();
}

int main(){
    vector<int> deliciousness={1,2,3,4,5};
    cout<<countPairs(deliciousness);
    return 0;
}