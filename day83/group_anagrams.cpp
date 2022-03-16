#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs)
{
    unordered_map<string, vector<string>> m;
    for (auto str : strs)
    {
        string temp = str;
        sort(temp.begin(), temp.end());
        m[temp].push_back(str);
    }
    vector<vector<string>> res;
    for (auto it = m.begin(); it != m.end(); ++it)
        res.push_back(it->second);
    return res;
}

int main(){
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> res = groupAnagrams(strs);
    for (auto vec : res)
    {
        for (auto str : vec)
            cout << str << " ";
        cout << endl;
    }
    return 0;
}