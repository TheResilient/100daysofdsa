#include<bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s, string p)
{
    if (s.size() < p.size())
        return {};
    unordered_map<char, int> occ;
    for (char c : p)
        occ[c]--;
    for (int i = 0; i < p.size(); i++)
        if (++occ[s[i]] == 0)
            occ.erase(s[i]);
    vector<int> ans;
    if (occ.empty())
        ans.push_back(0);
    for (int i = p.size(), j = 0; i < s.size(); i++, j++)
    {
        if (++occ[s[i]] == 0)
            occ.erase(s[i]);
        if (--occ[s[j]] == 0)
            occ.erase(s[j]);
        if (occ.empty())
            ans.push_back(j + 1);
    }
    return ans;
}

int main(){
    string s,p; cin>>s>>p;
    vector<int>ans = findAnagrams(s,p);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}