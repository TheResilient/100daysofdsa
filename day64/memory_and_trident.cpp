#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int straight=0;
    int side=0;
    int len=s.length();
    if(len%2!=0){
        cout<<-1<<endl;
        return;
    }
    for(int i=0; i<s.size(); i++){
        if(s[i]=='L'){
            side++;
        }
        else if(s[i]=='R'){
            side--;
        }
        else if(s[i]=='U'){
            straight++;
        }
        else if(s[i]=='D'){
            straight--;
        }
    }
    cout<<(abs(straight)+abs(side))/2<<endl;
}

int main(){
    solve();
    return 0;
}