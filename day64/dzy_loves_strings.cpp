#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    int n = s.size();
    int k; cin >> k;
    int max = INT_MIN;
    int arr[26];
    int j=1;
    for(int i=0; i<26; i++){
        cin>>arr[i];
        if(arr[i]>max) max = arr[i];
    }
    int sum=0;
    for(int i=1; i<=n; i++){
        int m = int(s[i-1]-'a');
        sum += i*arr[m];
    }
    for(int i=n+1; i<=n+k; i++){
        sum+=max*i;
    }
    cout << sum << endl;

}

int main(){
    solve();
    return 0;
}