#include<bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts){
    int max_wealth = 0;
    for(int i=0; i<accounts.size(); i++){
        if(accumulate(accounts[i].begin(), accounts[i].end(), 0) > max_wealth)
            max_wealth = accumulate(accounts[i].begin(), accounts[i].end(), 0);
    }
    return max_wealth;
}

int main(){
    vector<vector<int>> accounts = {{2,8,7},{3,5,9},{1,2,3,4,5},{1,2,3,4,5,6,7,8,9,10}};
    cout<<maximumWealth(accounts);
    return 0;
}