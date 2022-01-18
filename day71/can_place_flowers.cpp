#include <bits/stdc++.h>
using namespace std;

// bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//     int count = 0;
//     for(int i=0;i<flowerbed.size()-1;i++){
//         if(flowerbed[i]==0){
//             if(i==0){
//                 if(flowerbed[i+1]==0){
//                     count++;
//                     flowerbed[i] = 1;
//                 }
//             }
//             else if(i==flowerbed.size()-1){
//                 if(flowerbed[i-1]==0){
//                     count++;
//                     flowerbed[i] = 1;
//                 }
//             }
//             else{
//                 if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
//                     count++;
//                     flowerbed[i] = 1;
//                 }
//             }
//         }
//     }
//     return count>=n;
// }

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
        if(n>m)return false;
        if(n==0)return true;
        if(m==1 && (flowerbed[0]==0))return true;
        if(m==1 && (flowerbed[0]==1))return false;
        int count = 0;
        int z=0;
        if(flowerbed[0]==0 && flowerbed[1]==0){
            flowerbed[0]=1;
            count++;
        }
        if(flowerbed[m-1]==0 && flowerbed[m-2]==0){
            flowerbed[m-1]=1;
            ++count;
        }
        for(int i=1;i<m-1;++i){
            if( flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]==0 )
                ++z;
            if(flowerbed[i]==1){
                    count += (z+1)/2;
                    z=0;
                }
            
        }
        count +=(z+1)/2;
        if(n>count)return false;
        return true;
    }

int main(){
    vector<int> flowerbed = {1,0,0,0,1};
    cout<<canPlaceFlowers(flowerbed,1)<<endl;

    return 0;
}