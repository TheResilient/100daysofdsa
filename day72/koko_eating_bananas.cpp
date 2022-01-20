#include <bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h){
    int n = piles.size();
    int l = 1;
    int r = *max_element(piles.begin(), piles.end());
    while(l < r){
        int mid = l + (r - l) / 2;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += (piles[i] + mid - 1) / mid;
        }
        if(sum > h) l = mid + 1;
        else r = mid;
    }
    return l;
}

int main(){
    vector<int> piles = {3,6,7,11};
    int h = 8;
    cout<<minEatingSpeed(piles,h)<<endl;
    return 0;
}