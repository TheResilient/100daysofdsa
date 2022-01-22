#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    int solve (int N,vector<int> &A,int X,int K)
    {
        sort(A.begin(), A.end());
        int i=0;
        while(X>0){
            X-=A[i];
            i++;
        }
        if(i+K>N-1) N-1;
        // if(i==N-1-K) return A[i+K];
        return i+K-1;
    }
};


// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    string ss;
    while (t-- > 0) {
        int n,x,k;
        cin >> n >> x >> k;
		vector<int> A(n);
		for(int i = 0; i<n; i++)cin >> A[i];
        Solution obj;
        int ans = obj.solve (n, A,x,k);
        cout << ans << "\n";
    }
    return 0;
}