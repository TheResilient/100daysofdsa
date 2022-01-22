#include<bits/stdc++.h>
using namespace std;

//   int numDecodings(string s) {
//         int n = s.size();
//         vector<int> dp(n+1);
//         dp[n] = 1;
//         for(int i=n-1;i>=0;i--) {
//             if(s[i]=='0') dp[i]=0;
//             else {
//                 dp[i] = dp[i+1];
//                 if(i<n-1 && (s[i]=='1'||s[i]=='2'&&s[i+1]<'7')) dp[i]+=dp[i+2];
//             }
//         }
//         return s.empty()? 0 : dp[0];   
//     }

int numDecodings(string s){
    if(s.length()==0 || s[0]=='0') return 0;
    if(s.length()==1) return 1;
    int count1=1,count2=1;
    for(int i=1; i<s.length(); i++){
        int d = s[i]-'0';
        int dd = (s[i-1]-'0')*10+d;
        int count=0;
        if(d>0) count+=count2;
        if(dd>=10 && dd<=26) count+=count1;
        count1=count2;
        count2=count;
    }
    return count2;
}

int main(){
    string s;
    cin>>s;
    cout<<numDecodings(s)<<endl;
}