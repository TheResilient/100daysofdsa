#include<bits/stdc++.h>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    int ans=0;
    for(int i=0; i<jewels.size(); i++){
        for(int j=0; j<stones.size(); j++){
            if(jewels[i]==stones[j]) ans++;
        }
    }
    return ans;
}

int main(){
    string jewels = "aA";
    string stones = "aAAbbbb";
    cout << numJewelsInStones(jewels, stones) << endl;
    return 0;
}