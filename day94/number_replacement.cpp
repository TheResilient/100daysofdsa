#include<bits/stdc++.h>
using namespace std;

string soolution(string s, int a[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] == a[j] and s[i] == s[j])
            {
                continue;
            }
            else if(a[i] == a[j] and s[i] != s[j]){
                return "NO";
            }
                
        }
    }
    return "YES";
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        // set<int> s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            
        }
        string s; cin>>s;
        cout<<soolution(s,a,n)<<endl;
        // int count=s.size();
        // string alpha="abcdefghijklmnopqrstuvwxyz";
        // string ans[n];
        // for(int i=0; i<count; i++){
        //     int c=*next(s.begin(),i);
        //     for(int j=0; j<n; j++){
        //         if(a[j]==c){
        //             ans[j]=alpha[i];
        //         }
        //     }
        // }
        // string answer="";
        // for(int i=0; i<n; i++){
        //     answer+=ans[i];
        // }
        // cout<<answer<<endl;
    }
}