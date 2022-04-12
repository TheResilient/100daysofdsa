#include<bits/stdc++.h>
using namespace std;

int reverse(int x){
    string s=to_string(x);
    reverse(s.begin(), s.end());
    return stoi(s);
}

int main(){

}