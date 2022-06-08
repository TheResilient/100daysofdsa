#include<bits/stdc++.h>
using namespace std;

int removePalindromeSub(string s){
    return 2-(s==string(s.rbegin(),s.rend()))-s.empty();
}

int main(){
    string s="baabb";
    cout<<removePalindromeSub(s);
    return 0;
}