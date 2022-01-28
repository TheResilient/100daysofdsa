#include<bits/stdc++.h>
using namespace std;

string longestPalindrome(string s){
    int n = s.size();
    if(n == 0) return "";
    vector<vector<int>> dp(n, vector<int>(n, 0));
    int max_len = 0, start = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(i==j) dp[i][j] = 1;
            else if(i-j==1) dp[i][j] = (s[i]==s[j]);
            else dp[i][j] = (s[i]==s[j]) && dp[i-1][j+1];
            if(dp[i][j] && i-j+1>max_len){
                max_len = i-j+1;
                start = j;
            }
        }
    }
    return s.substr(start, max_len);
}

int main(){
    string s; cin>>s;
    cout<<longestPalindrome(s)<<endl;
    return 0;
}