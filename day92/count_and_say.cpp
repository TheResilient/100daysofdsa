#include<bits/stdc++.h>
using namespace std;

string countAndSay(int n){
    string s="1";
    for(int i=1; i<n; i++){
        string temp="";
        int count=1;
        for(int j=0; j<s.size(); j++){
            if(j==s.size()-1 || s[j]!=s[j+1]){
                temp+=to_string(count)+s[j];
                count=1;
            }
            else{
                count++;
            }
        }
        s=temp;
    }
    return s;
}

int main(){
    int n=5;
    cout<<countAndSay(n);
    return 0;
}