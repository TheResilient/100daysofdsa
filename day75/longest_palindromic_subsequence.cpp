#include<bits/stdc++.h>
using namespace std;

// int count(char c, string s){
//     int count1=0;
//     for(int i=0; i<s.length(); i++){
//         if(s[i]==c) count1++;
//     }
//     return count1;
// }

// int longestPalindromeSubseq(string s){
//     int n=s.size();
//     if(n==0) return 0;
//     if(n==1) return 1;
//     vector<vector<int>> dp(n, vector<int>(n, 0));
//     int max_len=0;
//     // for(int i=0; i<n; i++){
//     //     for(int j=0; j<=i; j++){
//     //         if(i==j) dp[i][j]=1;
//     //         else if(i-j==1) dp[i][j]=(s[i]==s[j]);
//     //         else dp[i][j]=(s[i]==s[j]) && dp[i-1][j+1];
//     //         if(dp[i][j] && i-j+1>max_len){
//     //             max_len=i-j+1;
//     //         }
//     //     }
//     // }
//     set<char> s1;
//     for(int i=0; i<n; i++){
//         s1.insert(s[i]);
//     }
//     int ans=0;
//     int flag=0;
//     set<char>::iterator i;
//     for(i=s1.begin(); i!=s1.end(); i++){
//         if(count(*i,s)%2==0){
//             ans+=count(*i,s);
//         }
//         else{
//             ans+=count(*i,s)-1;
//             flag=1;
//         }
//     }
//     return ans+flag;
// }


int longestPalindromeSubseq(string s){
    vector<vector<int>> dp(s.size(), vector<int>(s.size(), 0));
    for(int i=s.length()-1; i>=0; i--){
        dp[i][i]=1;
        for(int j=i+1; j<s.length(); j++){
            if(s[i]==s[j]){
                dp[i][j]=dp[i+1][j-1]+2;
            }
            else{
                dp[i][j]=max(dp[i+1][j], dp[i][j-1]);
            }
        }
    }
    return dp[0][s.length()-1];
}

int main(){
    string s; cin>>s;
    cout<<longestPalindromeSubseq(s)<<endl;
    return 0;
}