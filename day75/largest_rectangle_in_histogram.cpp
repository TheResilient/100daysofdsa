#include<bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    vector<int> left(n, 0);
    vector<int> right(n, 0);
    left[n-1]=n;
    left[0]=-1;
    for(int i=1; i<n; i++){
        int j=i-1;
        while(j>=0 && heights[j]>=heights[i]){
            j=left[j];
        }
        left[i]=j;
    }
    for(int i=n-1; i>=0; i--){
        int j=i+1;
        while(j<n && heights[j]>=heights[i]){
            j=right[j];
        }
        right[i]=j;
    }
    int max_area=0;
    for(int i=0; i<n; i++){
        max_area=max(max_area, heights[i]*(right[i]-left[i]-1));
    }
    return max_area;
}

int main(){
    vector<int> heights = {2,1,5,6,2,3};
    cout<<largestRectangleArea(heights)<<endl;
    return 0;
}
