#include<bits/stdc++.h>
using namespace std;

vector<int> partitionLabels(string s){
    vector<int> res;
    int last[26] = {0};
    for(int i = 0; i < s.length(); i++){
        last[s[i] - 'a'] = i;
    }
    int start = 0, end = 0;
    for(int i = 0; i < s.length(); i++){
        end = max(end, last[s[i] - 'a']);
        if(i == end){
            res.push_back(end - start + 1);
            start = i + 1;
        }
    }
    return res;
}

int main(){
    string s;
    getline(cin, s);
    vector<int> res = partitionLabels(s);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}