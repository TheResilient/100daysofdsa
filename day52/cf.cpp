// find all substrings of a string

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int countab(string s){
    int count = 0;
    for(int i=0; i<s.size()-1; i++){
        if(s[i] == 'a' && s[i+1]=='b'){
            count++;
        }
    }
    return count;
}

int countba(string s){
    int count = 0;
    for(int i=0; i<s.size()-1; i++){
        if(s[i] == 'b' && s[i+1]=='a'){
            count++;
        }
    }
    return count;
}

int checkab(string s, int ab, int ba){
    if(ab==ba){
        return 0;
    }
    else if(ab>ba){
        return 1;
    }
    else{
        return -1;
    }
}

string convertstring(string s, int difference){
    int i=0;
    while(difference>0){
        if(s[i]=='a' && s[i+1]=='b'){
            s[i]
        }
        i++;
        difference--;
    }
}

int main(){
    string s;
    cin >> s;
    int ab=countab(s);
    int ba=countba(s);
    if(checkab(s, ab, ba)==0){
        cout<<s<<endl;
    }
    else if(checkab(s, ab, ba)==1){
        
    }
    else{
        
    }
    return 0;
}

