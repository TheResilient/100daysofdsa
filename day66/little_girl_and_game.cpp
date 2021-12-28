#include <bits/stdc++.h>
using namespace std;

// int ispalindrome(string s){
//     int n = s.length();
//     for(int i=0; i<n/2; i++){
//         if(s[i] != s[n-i-1]) return 0;
//     }
//     return 1;
// }

void solve(){
    // string s; cin>>s;
    // int n = s.size();
    // int turn = 0;
    // for(int i=0; i<n; i++){
    //     if(ispalindrome(s.substr(i,n-1))){
    //         // cout<<n-i<<endl;
    //         // cout<<turn%2<<endl;
    //         // turn++;
    //         if(turn%2 == 0) cout<<"First"<<endl;
    //         else cout<<"Second"<<endl;
    //         return;
    //     }
        
    //     // continue;
    //     turn++;
        
    // }
    long long m,n,t,i,j,k,x=0,ans,odd=0;
    string s;
    cin>>s;
    long long cnt[30];

    for(i=0; i<s.length(); i++) cnt[s[i]-'a']++;

    for(i=0; i<26; i++)
    {
        //cout<<cnt[i]<<" "<< (cnt[i]&1)<<endl;
        if(cnt[i]&1)  odd++;
    }
    //cout<<odd<<" -- "<<(odd&1)<<endl;

    if( (odd==0) || (odd&1)) cout<<"Second"<<endl;
    else cout<<"First"<<endl;
}

int main(){
    solve();
    return 0;
}