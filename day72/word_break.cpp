#include <bits/stdc++.h>
using namespace std;

// bool wordBreak(string s, vector<string>& wordDict){
//     for(int i = 0; i < s.size(); i++){
//         for(int j = 0; j < wordDict.size(); j++){
//             if(s.substr(i, wordDict[j].size()) == wordDict[j]){
//                 if(i == 0) return true;
//                 else if(wordBreak(s.substr(0, i), wordDict)) return true;
//             }
//         }
//     }
//     return false;
// }


// "catsandog"
// ["cats","dog","sand","and","cat"] 
// bool wordBreak(string s, vector<string>& wordDict){
//     for(int i=0; i<wordDict.size(); i++){
//         if(s.find(wordDict[i]) == 0){
//             if(s.size() == wordDict[i].size()) return true;
//             else if(wordBreak(s.substr(wordDict[i].size()), wordDict)) return true;
//         }
//     }
//     return false;
// }

bool wordBreak(string s, vector<string>& wordDict){
    vector<bool> dp(s.size()+1, false);
    dp[0] = true;
    for(int i=0; i<=s.size(); i++){
        for(int j=0; j<i; j++){
            if(dp[j]){
                if(find(wordDict.begin(),wordDict.end(),s.substr(j,i-j)) != wordDict.end()){
                    dp[i] = true;
                    break;
                }
            }
        }

    }
    return dp[s.size()];    
}

int main(){
    string s = "catsandog";
    vector<string> wordDict = {"cats","dog","sand","and","cat"};
    cout<<wordBreak(s, wordDict)<<endl;
    return 0;
}