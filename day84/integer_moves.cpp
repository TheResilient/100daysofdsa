#include<bits/stdc++.h>
using namespace std;

int isperfectsquare(int n){
    int i = 1;
    while(i*i <= n){
        if(i*i == n) return 1;
        i++;
    }
    return 0;
}

int main(){
    int t; 
    while(cin>>t){
        int x,y; cin>>x>>y;
        int ans=0;
        if(isperfectsquare(x*x + y*y)){
            cout<<1<<endl;
        }
        else if(x==0 and y==0){
            cout<<0<<endl;
            continue;
        }
        else if((x==0 and y!=0) or (y==0 and x!=0)) cout<<1<<endl;
        else{
            while(!isperfectsquare(x*x+y*y)){
                if(x>y){
                    x--;
                }
                else{
                    y--;
                }
                ans++;
            }
            cout<<ans+1<<endl;
        }
    }
}