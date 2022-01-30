#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t){
    if(s.length()==0) return true;
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        st.push(s[i]);
    }
    int j=t.length()-1;
    int ans=false;
    while(j>-1){
        if(t[j]==st.top()){
            // cout<<st.top()<<endl;
            st.pop();
        }
        if(st.empty()){
            ans = true;
            break;
        }
        j--;
    }
    return ans;
}

int main(){
    string s,k; cin>>s>>k;
    cout<<isSubsequence(s,k)<<endl;
    return 0;
}