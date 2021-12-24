#include <bits/stdc++.h>
using namespace std;

void solve(){
    // 1 2 4 6
    // 1 5 5 7 9
    // ->(1,1), (4,5), (6,7)
    // 1 2 3 4
    // 10 11 12 13
    // ->0
    // 1 1 1 1 1
    // 1 2 3
    // ->(1,1), (1,2)  

    int n;
    int boys[n];
    for(int i=0; i<n; i++){
        cin>>boys[i];
    }
    int m;
    int girls[m];
    for(int i=0; i<m; i++){
        cin>>girls[i];
    }
    sort(boys, boys+n);
    sort(girls, girls+n);

    int count=0;
    if(max(n,m)==m){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int sol = boys[i]-girls[j];
                
                if(abs(sol)<=1) count++;
                break;
            }
        }
    }
    else{
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int sol = boys[i]-girls[j];
                if(abs(sol)<=1) count++;
                break;
            }
        }
    }
    cout << count <<endl;

}

int main(){
    solve();
    return 0;
}