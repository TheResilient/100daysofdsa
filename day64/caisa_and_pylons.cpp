#include <bits/stdc++.h>
using namespace std;

void solve(){
    int  x = 0, y, n, sol = 0,energy = 0;
    cin >> n;
    for(int i = 1;i <= n; ++i)
    {
        cin >> y;
        energy += x-y;
        if(energy < 0){
            sol += -energy;
            energy = 0;
        }
        x = y;
    }
    cout<<sol<<endl;
}

int main(){
    solve();
    return 0;
}