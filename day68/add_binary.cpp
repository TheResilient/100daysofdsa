#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) {
    string res = "";
    int carry = 0;
    int i = a.size() - 1, j = b.size() - 1;
    while(i >= 0 || j >= 0){
        int x = i >= 0 ? a[i] - '0' : 0;
        int y = j >= 0 ? b[j] - '0' : 0;
        int sum = x + y + carry;
        carry = sum / 2;
        sum %= 2;
        res = to_string(sum) + res;
        i--;
        j--;
    }
    if(carry) res = "1" + res;
    return res;
}

int main(){
    string a = "11";
    string b = "1";
    cout << addBinary(a, b) << endl;
    return 0;
}