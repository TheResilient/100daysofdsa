#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int arr[n];
    int even=0, odd=0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] %2==0) even++;
        else odd++;
    }
    if(even==n) cout<<"Second"<<endl;
    else cout<<"First"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    
    return 0;
}

