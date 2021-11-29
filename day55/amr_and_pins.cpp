#include <bits/stdc++.h>
using namespace std;

int find(int x, int y, int x1, int y1, int r){
    int x2 = x1-x;
    int y2 = y1-y;
    int d = sqrt(x2*x2 + y2*y2);
    int count=1;
    if(d<r) return 0;
    if(d==r) return 1;
    int k=r;
    while(k<d){
        k=k+2*k;
        count++;
    }
    return count-1;
}

int main(){
    int x, y,x1,y1, r;
    cin>>r>>x>>y>>x1>>y1;
    
    cout<<find(x, y, x1, y1, r)<<endl;
    return 0;
}