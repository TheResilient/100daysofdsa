#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s, int k) {
    int flag=0;
    for(int i=0; i<s.length()-3; i++){
        if(s[i]==s[i+1] and s[i+1]==s[i+2]) flag=1;
    }
    if(flag=0){
        return s;
    }
    
}
