#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    string dict[650];
    char alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int k=0;
    for(int i=0;i<26;i++){
        string a="";
        a+=alpha[i];
        // cout<<a<<endl;
        for(int j=0; j<26; j++){
            if(i!=j){
                a+=alpha[j];
                dict[k] = a;
                // cout << a << endl;
                k++;
                a=alpha[i];

            }
            
        }
    }
    // for(int i=0; i<650; i++){
    //     cout<<dict[i]<<endl;
    // }
    // return 0;
    while(t--){
        string s; cin>>s;
        // cout<<s<<endl;
        for(int i=0; i<650; i++){
            if(s==dict[i]){
                cout<<i+1<<endl;
            }
        }
    }
    return 0;
}