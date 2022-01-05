#include <bits/stdc++.h>
using namespace std;

int myAtoi(string str) {
    int res = 0;
    int sign = 1;
    int i = 0;
    while(str[i] == ' ') i++;
    if(str[i] == '-'){
        sign = -1;
        i++;
    }
    else if(str[i] == '+'){
        sign = 1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9'){
        if(res > INT_MAX/10 || (res == INT_MAX/10 && str[i] - '0' > 7)) return sign == 1 ? INT_MAX : INT_MIN;
        if(res < INT_MIN/10 || (res == INT_MIN/10 && str[i] - '0' < -8)) return sign == 1 ? INT_MIN : INT_MAX;
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return sign * res;
}

int main(){
    string str = "-123";
    cout << myAtoi(str) << endl;
    return 0;
}