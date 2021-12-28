// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
//     int n,l,r,x;
//     cin >> n >> l >> r >> x;
//     vector<int> a(n);
//     for(int i=0; i<n; i++) cin >> a[i];
    
// }

#include <bits/stdc++.h>
 
using namespace std;
 
// Constant size for bitset
#define SZ 100001
 
int countOfpossibleNumbers(vector<long long>S, int N, int L, int R)
{
    // Creating a bitset of size SZ
    bitset <SZ> BS;
     
    // Set 0th position to 1
    BS[0] = 1;
     
    // Build the bitset
    for (int i = 0; i < N; i++) {
         
        // Left shift the bitset for each
        // element and taking bitwise OR
        // with previous bitset
        BS = BS | (BS << S[i]);
    }
     
    int prefix[SZ];
     
    // Initializing the prefix array to zero
    memset(prefix, 0, sizeof(prefix));
     
    // Build the prefix array
    for (int i = 1; i < SZ; i++) {
        prefix[i] = prefix[i - 1] + BS[i];
    }
     
    // Answer the given query
    int ans = prefix[R] - prefix[L - 1];
     
    return ans;
}
 
// Driver Code to test above functions
int main()
{
    int n,L,R,x;
    // cin>>n;
    cin>>n>>L>>R>>x;
    vector<long long>S;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        S.push_back(x);
    }
    sort(S.begin(),S.end());
    vector<long long> a;
    for(int i=1; i<n; i++){
        if(S[i] - S[i-1]>x)    {
            continue;
        }
        else{
            long long k = S[i];
            a.push_back(k);
        }
    }
    int N = sizeof(S) / sizeof(S[0]);
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // int L = 40, R = 50;
     
    cout << countOfpossibleNumbers(a, N, L, R);
         
    return 0;
}
