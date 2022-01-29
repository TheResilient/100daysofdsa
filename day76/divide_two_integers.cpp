#include<bits/stdc++.h>
using namespace std;

long long divide(int dividend, int divisor){
    if(dividend == INT_MIN && divisor == -1)
        return INT_MAX;
    long long sign = (dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0) ? 1 : -1;
    long long dvd = labs(dividend);
    long long dvs = labs(divisor);
    long long res = 0;
    for(int i=31; i>=0; i--){
        if((dvd >> i) >= dvs){
            dvd -= (dvs << i);
            res += (1 << i);
        }
    }
    return sign == 1 ? res : -res;
}

int main(){
    cout<<divide(7, -3);
    return 0;
}