#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char c; cin>>c;
        string s; cin>>s;
        int max=INT_MIN;
        int i=0;
        while(i<n){
            if(s[i]==c){
                int count=0;
                int j=i;
                while(s[j]!='g'){
                    count++;
                    j=(j+1)%n;
                }
                if(count>max){
                    max=count;
                }
            }
            i++;
        }
        cout<<max<<endl;
    }
}