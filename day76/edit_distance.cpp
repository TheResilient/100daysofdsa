#include<bits/stdc++.h>
using namespace std;

int minDistance(string word1, string word2){
    // min changes to make word1 equal to word2
    vector<vector<int>> dp(word1.length()+1, vector<int>(word2.length()+1, 0));
    // dp[i][j] = min changes to make word1[0..i-1] equal to word2[0..j-1]
    
}