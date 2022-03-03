#include<bits/stdc++.h>
using namespace std;

string inttobin(int n){
    return bitset<32>(n).to_string();
}

vector<int> countBits(int n){
    // convert to binary
    vector<int> ans;
    int sum=0;
    ans.push_back(0);
    for(int i=1; i<=n; i++){
        for(int j=0; j<32; j++){
            if(inttobin(i)[j]=='1') sum++;
        }
        ans.push_back(sum);
        sum=0;
    }
    return ans;
}

int main(){
    int n=5;
    vector<int> ans=countBits(n);

    for(auto x:ans)
        cout<<x<<" ";
    return 0;
}