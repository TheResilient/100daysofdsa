#include<bits/stdc++.h>
using namespace std;

string smallestStringWithSwaps(string s, vector<vector<int>>& pairs){
    unordered_map<int,vector<int>> mp;
    for(int i=0;i<pairs.size();i++){
        mp[pairs[i][0]].push_back(pairs[i][1]);
        mp[pairs[i][1]].push_back(pairs[i][0]);
    }
    vector<int> visited(s.size(),0);
    for(int i=0;i<s.size();i++){
        if(visited[i]==0){
            visited[i]=1;
            queue<int> q;
            q.push(i);
            while(!q.empty()){
                int cur = q.front();
                q.pop();
                for(int j=0;j<mp[cur].size();j++){
                    if(visited[mp[cur][j]]==0){
                        visited[mp[cur][j]]=1;
                        q.push(mp[cur][j]);
                    }
                }
            }
        }
    }
    string res = "";
    for(int i=0;i<s.size();i++){
        if(visited[i]==1){
            res+=s[i];
        }
    }
    return res;
}

int main(){
    string s = "dcab";
    vector<vector<int>> pairs = {{0,3},{1,2}};
    string res = smallestStringWithSwaps(s,pairs);
    cout<<res<<endl;
    return 0;
}