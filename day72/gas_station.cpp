#include<bits/stdc++.h>
using namespace std;

int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {

       int start = gas.size()-1;
       int end = 0;
       int sum = gas[start] - cost[start];
       while (start > end) {
          if (sum >= 0) {
             sum += gas[end] - cost[end];
             ++end;
          }
          else {
             --start;
             sum += gas[start] - cost[start];
          }
       }
       return sum >= 0 ? start : -1;
}

int main(){
    vector<int> gas ={1,2,3,4,5};
    vector<int> cost ={3,4,5,1,2};
    cout<<canCompleteCircuit(gas, cost)<<endl;
    return 0;
}