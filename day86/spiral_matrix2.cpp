#include<bits/stdc++.h>
using namespace std;

// vector<vector<int>> generateMatrix(int n){
//     int last=3;
//     // 00 01 02
//     // 10 11 12
//     // 20 21 22
//     // spiral matrix
//     vector<vector<int>> matrix(n, vector<int>(n));
//     // cout<<"-->"<<matrix[0][0]<<endl;
//     int row=0,col=0;
//     int num=0;
//     while(num<=last){
//         for(int i=col;i<n-col;i++){
//             matrix[row][i]=num++;
//             cout << col << "--" << num << "--" << row << "-->"<<endl;
//         }
//         row++;
//         for(int i=row;i<n-row;i++){
//             matrix[i][n-col-1]=num++;
//             cout << col << "--" << num << "--" << row << "-->" << endl;
//         }
//         col++;
//         for(int i=n-col-1;i>=col;i--){
//             matrix[n-row-1][i]=num++;
//             cout << col << "--" << num << "--" << row << "-->" << endl;
//         }
//         row--;
//         for(int i=n-row-1;i>=row;i--){
//             matrix[i][col]=num++;
//             cout << col << "--" << num << "--" << row << "-->" << endl;
//         }
//         col--;
//     }
//     int br=0;
//     for(int i=0; i<last; i++){
//         for(int j=0; j<last; j++){
//             if(matrix[i][j]==0){
//                 matrix[i][j]=num++;
//                 br=1;
//                 break;
//             }
//         }
//         if(br) break;
//     }
//     return matrix;
// }

vector<vector<int>> generateMatrix(int n)
{
    int r1 = 0, r2 = n - 1;
    int c1 = 0, c2 = n - 1;
    int val = 0;

    // result matrix
    vector<vector<int>> v(n, vector<int>(n));
    while (r1 <= r2 && c1 <= c2)
    {
        // left to right (row will be fixed)
        for (int i = c1; i <= c2; ++i)
            v[r1][i] = ++val;

        // move down(col will be fixed)
        for (int i = r1 + 1; i <= r2; ++i)
            v[i][c2] = ++val;

        // move right to left
        // move  up
        if (r1 < r2 && c1 < c2)
        {
            // move right to left (row will be fixed)
            for (int i = c2 - 1; i > c1; --i)
                v[r2][i] = ++val;

            // move up (col will be fixed)
            for (int i = r2; i > r1; --i)
                v[i][c1] = ++val;
        }
        ++r1;
        --r2;
        ++c1;
        --c2;
    }
    return v;
}

int main(){
    int n; cin>>n;
    vector<vector<int>> matrix=generateMatrix(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}