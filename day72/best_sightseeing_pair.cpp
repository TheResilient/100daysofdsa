#include<bits/stdc++.h>
using namespace std;

// int maxScoreSightseeingPair(vector<int>& values){
//     int min_price = INT_MIN;
//     for(int i = 0; i < values.size()-1; i++){
//         for(int j=i+1; j<values.size(); j++){
//             if(values[i]+values[j]+i-j>min_price) min_price = values[i]+values[j]+i-j;
//         }
//     }
//     return min_price;
// }

int maxScoreSightseeingPair(vector<int>& values){
    int result =0, cur=0;
    for(int i=0; i<values.size(); i++){
        result = max(result, cur+values[i]);
        cur = max(cur, values[i])-1;
    }
    return result;
}

int main(){
    vector<int> values = {8,1,5,3,6,4};
    cout << maxScoreSightseeingPair(values) << endl;
    return 0;
}