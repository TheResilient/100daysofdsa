#include <bits/stdc++.h>
using namespace std;

int if_exists(string s, vector<string> v)
{
    for(int i=0;i<v.size();i++)
    {
        if(s==v[i])
            return i;
    }
    return -1;
}

void solve(){
    int n;
    cin>>n;
    vector<string> v;
    set<string> s;
    vector<int> countt;
    while(n--){
        string ss;
        cin>>ss;
        s.insert(ss);
        v.push_back(ss);
        int count=0;

        for(int i=0; i<s.size(); i++){
            for(int j=0; j<v.size(); j++){
                if(s[i]==v[j]) {
                    count++;
                }
            }
            countt.push_back(count);
            count=0;
        }
    }
}

int main(){
    solve();
}