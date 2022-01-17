#include <bits/stdc++.h>
using namespace std;

bool wordPattern(string pattern,string s){
    unordered_map<char,string> mp;
    unordered_set<string> us;
    stringstream ss(s);
    string word;
    int i=0;
    while(ss>>word){
        if(mp.count(pattern[i])==0){
            if(us.count(word)) return false;
            mp[pattern[i]]=word;
            us.insert(word);
        }else{
            if(mp[pattern[i]]!=word) return false;
        }
        i++;
    }
    return i==pattern.size();
}

int main(){
    string pattern = "abba";
    string s = "dog cat cat dog";
    cout<<wordPattern(pattern,s)<<endl;
    return 0;
}