#include<bits/stdc++.h>
using namespace std;

vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries){
    vector<int> ans;
    int n = points.size();
    int m = queries.size();
    for(int i = 0; i < m; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            int x = points[j][0];
            int y = points[j][1];
            int r = queries[i][0];
            int x1 = queries[i][1];
            int y1 = queries[i][2];
            if(pow(x - x1, 2) + pow(y - y1, 2) <= pow(r, 2)){
                count++;
            }
        }
        ans.push_back(count);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> points(n, vector<int>(2));
    for(int i = 0; i < n; i++){
        cin >> points[i][0] >> points[i][1];
    }
    int q;
    cin >> q;
    vector<vector<int>> queries(q, vector<int>(3));
    for(int i = 0; i < q; i++){
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
    }
    vector<int> ans = countPoints(points, queries);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
    return 0;
}