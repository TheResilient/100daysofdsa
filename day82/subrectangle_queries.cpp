#include<bits/stdc++.h>
using namespace std;

class SubrectangleQueries
{
public:
    vector<vector<int>> rect, subs;
    SubrectangleQueries(vector<vector<int>> &rectangle)
    {
        swap(rect, rectangle);
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {
        subs.push_back({row1,col1,row2,col2,newValue});
    }

    int getValue(int row, int col)
    {
        for (int i = subs.size() - 1; i >= 0; --i)
            if (subs[i][0] <= row && subs[i][1] <= col && row <= subs[i][2] && col <= subs[i][3])
                return subs[i][4];
        return rect[row][col];
    }
};

int main(){
    vector<vector<int>> rect = {{3, 4, 3}, {3, 2, 4}, {2, 2, 4}, {4, 1, 1}};
    SubrectangleQueries s(rect);
    s.updateSubrectangle(0, 0, 2, 2, 1);
    s.updateSubrectangle(1, 1, 3, 3, 2);
    s.updateSubrectangle(0, 1, 1, 2, 3);
    cout << s.getValue(0, 0) << endl;
    cout << s.getValue(1, 1) << endl;
    cout << s.getValue(2, 1) << endl;
    cout << s.getValue(3, 2) << endl;
    
    return 0;
}