#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int t; cin>>t;
    while(t--)
    {
        int l,r; cin>>l>>r;
        int hsh[26];
        for(int i=0; i<26; i++)
        {
            hsh[i]=0;
        }
        l--,r--;
        for(int i=l; i<=r; i++)
        {
            hsh[s[i]-'a']++;
        }
        int cnt=0;
        for(int i=0; i<26; i++)
        {
            if(hsh[i]%2!=0)
            {
                cnt++;
            }
        }
        if(cnt>1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}