#include <bits/stdc++.h>
using namespace std;

int answer(string s, int n){
    if(int(s[n-1])%2==0) return 0;
    if((int)(s[0])%2==0){
        return 1;
    }
    int possible =0;
    for(int i=1;i<n;i++){
        if((int)(s[i])%2==0){
            possible = 1;
        }
    }
    
    if(possible){
        return 2;
    }

    return -1;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>s;
        n=s.size();
        cout<<answer(s,n)<<endl;
    }
    return 0;
}