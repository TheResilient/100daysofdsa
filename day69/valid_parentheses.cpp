#include <bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return false;
            }
            else{
                char c = st.top();
                if(c=='(' && s[i]!=')'){
                    return false;
                }
                else if(c=='{' && s[i]!='}'){
                    return false;
                }
                else if(c=='[' && s[i]!=']'){
                    return false;
                }
                st.pop();
            }
        }
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s;
    cin >> s;
    if(isValid(s)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}