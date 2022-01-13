#include <bits/stdc++.h>
using namespace std;

int findMinArrowShots(vector<vector<int>>& points){
    if(points.size() == 0) return 0;
    sort(points.begin(), points.end(), [](vector<int>& a, vector<int>& b){
        return a[1] < b[1];
    });
    int res = 1;
    int end = points[0][1];
    for(int i = 1; i < points.size(); i++){
        if(points[i][0] > end){
            res++;
            end = points[i][1];
        }
        else{
            end = min(end, points[i][1]);
        }
    }
    return res;
}

int main(){
    vector<vector<int>> points = {{10,16},{2,8},{1,6},{7,12}};
    cout << findMinArrowShots(points) << endl;
    return 0;
}