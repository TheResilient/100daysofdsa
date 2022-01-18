#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count = 0;
    for(int i=0;i<flowerbed.size();i++){
        if(flowerbed[i]==0){
            if(i==0){
                if(flowerbed[i+1]==0){
                    count++;
                    flowerbed[i] = 1;
                }
            }
            else if(i==flowerbed.size()-1){
                if(flowerbed[i-1]==0){
                    count++;
                    flowerbed[i] = 1;
                }
            }
            else{
                if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                    count++;
                    flowerbed[i] = 1;
                }
            }
        }
    }
    return count>=n;
}

int main(){
    vector<int> flowerbed = {1,0,0,0,1};
    cout<<canPlaceFlowers(flowerbed,1)<<endl;
    
    return 0;
}