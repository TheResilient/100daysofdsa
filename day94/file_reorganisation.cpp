// write an algorithm to find the longest palindromic file arrangement that can be constructed using the given file labels

// Language: cpp

#include<bits/stdc++.h>
using namespace std;

int count(string s, char c){
    int count=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]==c) count++;
    }
    return count;
}

int solution(string file){
    set<char> s;
    for(int i=0; i<file.length(); i++){
        s.insert(file[i]);
    }
    int one=0;
    int c=0;
    // cout<<*next(s.begin(), 1);
    for(int i=0; i<s.size(); i++){
        char ele=*next(s.begin(), i);
        if(count(file, ele)==1 or count(file, ele)%2!=0) one=1;
        if(count(file, ele)>1 and count(file, ele)%2==0) c=c+count(file,ele);
        else if (count(file, ele) > 1 and count(file, ele) % 2 != 0){
            c=c+count(file,ele)-1;
        }
            
    }
    if(one) return c+1;
    return c; 
}

int main(){
    int t; cin>>t;
    while(t--){
        string file; cin>>file;
        cout<<solution(file)<<endl;
    }
}