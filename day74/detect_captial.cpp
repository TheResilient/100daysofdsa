#include<bits/stdc++.h>
using namespace std;

bool detectCapitalUse(string word){
    if(int(word[0])>=65 and int(word[0])<=90){
        if(word[1]>=65 and word[1]<=90){
            for(int i=2;i<word.length();i++){
                if(int(word[i])<65 or int(word[i])>90){
                    return false;
                }
            }
        }
        else{
            for(int i=2;i<word.length();i++){
                if(int(word[i])<97 or int(word[i])>122){
                    return false;
                }
            }
        }
    }
    else{
        for(int i=1;i<word.length();i++){
            if(int(word[i])<97 or int(word[i])>122){
                return false;
            }
        }
    }
    return true;
}

int main(){
    string s; cin>>s;
    cout<<detectCapitalUse(s)<<endl;
}