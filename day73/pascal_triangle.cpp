#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows){
    // vector<vector<int>> pascal_triangle;
    // // {{1},{1,1},{1,2,1},{1,3,3,1},{1,4,6,4,1},{}{}{}{}{}{}{}{}{}{}{}};
    // for(int i=0; i<numRows; i++){
    //     vector<int>row;
    //     for(int j=0; j<=i; j++){
    //         if(j==0) pascal_triangle[i][j]=1;
    //         else if(i==j) pascal_triangle[i][j]=1;
    //         else{
    //             pascal_triangle[i][j]=pascal_triangle[i-1][j-1]+pascal_triangle[i-1][j];
    //         }
    //     }
    // }
    // return pascal_triangle;

    
    vector<vector<int>> r(numRows);

    for (int i = 0; i < numRows; i++) {
        r[i].resize(i + 1);
        r[i][0] = r[i][i] = 1;
  
        for (int j = 1; j < i; j++)
            r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
    }
        
    return r;
    
}

int main(){
    int numRows; cin>>numRows;
    vector<vector<int>> pascal = generate(numRows);
    for(int i=0; i<numRows; i++){
        for(int j=0; j<pascal[i].size(); j++) cout<<pascal[i][j]<<" ";
        cout<<endl;
    }
}