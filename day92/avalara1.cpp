#include<bits/stdc++.h>
#include<sstream>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    long long int a=n;
    for(int i=n+1; i<=m; i++){
        a=a*i;
        // cout<<n<<endl;
    }
    int d=0;
    while(a%10==0){
        a=a/10;
        d++;
    }
    stringstream ss;
    ss << a;
    string s;
    ss >> s;

    stringstream ss1;
    ss1 << d;
    string s1;
    ss1 >> s1;
    cout<<s+" X "+"10^"+s1<<endl;
    return 0;
}