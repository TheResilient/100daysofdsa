#include<bits/stdc++.h>
using namespace std;

vector<int> getRow(int rowIndex){
    int numRows=rowIndex;
    vector<vector<int>> r(numRows+1);

    for (int i = 0; i <numRows+1; i++) {
    
        r[i].resize(i + 1);
        r[i][0] = r[i][i] = 1;
  
        for (int j = 1; j < i; j++)
            r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
    }
    // for(int i=0; i<r[numRows-1].size(); i++) cout<<r[numRows-1][i]<<" ";
    // cout<<endl;
    return r[numRows];
}

int main(){
    int index; cin>>index;
    vector<int> Row=getRow(index);
    for(int i=0; i<Row.size(); i++) cout<<Row[i]<<" ";
    return 0;
}