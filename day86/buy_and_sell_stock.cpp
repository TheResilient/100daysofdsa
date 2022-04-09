#include<bits/stdc++.h>
using namespace std;

int buyandsell(vector<int> price){
    // int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0; i<price.size()-1; i++){
        for(int j=i+1; j<price.size(); j++){
            if(price[j]-price[i]>max)
                max = price[j] - price[i];
        }
    }
    return max;
}

int main(){
    vector<int> price={7,1,5,3,6,4};
    cout<<buyandsell(price)<<endl;
    return 0;
}