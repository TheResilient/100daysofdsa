#include <bits/stdc++.h>
using namespace std;

// int myAtoi(string s){
//     string a="";
//     for(int i=0; i<s.size(); i++){
//         // char c = s[i];
//         if(s[i]=='-') a+=s[i];
//         if(isdigit(s[i])) {
//             a+=s[i];
//             if(!isdigit(s[i+1])) break;
//         }
//     }

//     int n= stoi(a);
//     // int ans=0;
//     // for(int i=n-1; i>=0; i--){

//     // }
//     return n;
// }

int myAtoi(string str) {
        while (str[0] == ' ') {
            str.erase(0, 1);
        }
        
        int sign = 1;
        if (str[0] == '+' || str[0] == '-') {
            if (str[0] == '-') sign = -1;
            str.erase(0, 1);
        }
        
        int result = 0;
        for (int i = 0; i < str.length(); i++) {
            if (!isdigit(str[i])) {
                break;
            }
            int v = str[i] - '0';

            if (result > INT_MAX/10) {
                if (sign == 1) return INT_MAX;
                if (sign == -1) return INT_MIN;
            } else if (result == INT_MAX/10) {
                if (sign == 1 && v >= 7) return INT_MAX;
                if (sign == -1 && v >= 8) return INT_MIN;
            }
            result = 10 * result + v;
        }
        
        return result * sign;
    }

int main(){
    string s; cin>>s;
    cout<<myAtoi(s)<<endl;
}