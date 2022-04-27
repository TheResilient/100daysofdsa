#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
     while (t--){
        string s; cin>>s;
        // int n = s.size();
        bool flag=true;
        int i=0;
        // cout<<s.substr(i,i+2)<<endl;
        // cout<<i+3<<endl;
        while(i<s.size()){
            if(s.substr(i,i+3)=="aaa"){
                i=i+3;
                cout << i<<"-->aaa" << endl;
            }
            else if(s.substr(i,i+2)=="aa"){
                i=i+2;
                cout << i << "-->aa" << endl;
            }
            else if(s.substr(i,i+3)=="bbb"){
                i=i+3;
                cout << i << "-->bbb" << endl;
            }
            else if(s.substr(i,i+2)=="bb"){                
                i=i+2;
                cout << i << "-->bb" << endl;
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
     }
    return 0;
}