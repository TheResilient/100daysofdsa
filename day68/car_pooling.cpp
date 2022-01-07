#include <bits/stdc++.h>
using namespace std;

bool carPooling(vector<vector<int>>& trips, int capacity) {
    sort(trips.begin(), trips.end());
    int i=0;
    int curr_cap=0;
    while(i<trips.size()){
        if(curr_cap+trips[i][0]>=capacity){
            curr_cap-=trips[i][0];
            i++;
        }
        else{
            curr_cap+=trips[i][1];
            i++;
        }
    }
    if(curr_cap>0) return false;
    return true;
}