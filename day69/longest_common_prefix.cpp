#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
    int sizes=INT_MAX;
    int flag=0;
    int n=strs.size();
    for(int i=0; i<n; i++){
        if(strs[i].size()<sizes){
            sizes=strs[i].size();
            flag =i;
        }
    }
    int ans=0;
    string res="";
    for(int i=0; i<sizes; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(strs[flag][i]==strs[j][i]){
                count++;
            }
            else{
                ans=1;
                break;
            }
        }
        if(count==n){
            res+=strs[flag][i];
        }
        if(ans==1) break;
    }
    return res;
}

int main(){
    vector<string> strs;
    for(int i=0; i<3; i++){
        string s;
        cin >> s;
        strs.push_back(s);
    }
    cout << longestCommonPrefix(strs) << endl;
    return 0;
}