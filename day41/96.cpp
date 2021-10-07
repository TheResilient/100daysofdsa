#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define PI 3.1415926535897932384626
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d", x)
#define pl(x) printf("%lld", x)
#define ps(s) printf("%s", s)
#define br printf("")
#define fo(i, n) for(i=0;i<n;i++)
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}
const int mod = 1'000'000'007;
const int N = 3e5;
vi v[N];
int a[N];

int minOps(string& A, string& B)
{
    int m = A.length(), n = B.length();
 
     // This parts checks whether conversion is
     // possible or not
    if (n != m)
       return -1;
    int count[256];
    memset(count, 0, sizeof(count));
    for (int i=0; i<n; i++)   // count characters in A
       count[B[i]]++;
    for (int i=0; i<n; i++)   // subtract count for
       count[A[i]]--;         // every character in B
    for (int i=0; i<256; i++)   // Check if all counts become 0
      if (count[i])
         return -1;
 
    // This part calculates the number of operations required
    int res = 0;
    for (int i=n-1, j=n-1; i>=0; )
    {
        // If there is a mismatch, then keep incrementing
        // result 'res' until B[j] is not found in A[0..i]
        while (i>=0 && A[i] != B[j])
        {
            i--;
            res++;
        }
 
        // If A[i] and B[j] match
        if (i >= 0)
        {
            i--;
            j--;
        }
    }
    return res;
}

// int count(string a, char c){
//     int count=0;
//     for(int i=0; i<a.length(); i++){
//         if(a[i]==c) count++;
//     }
//     return count;

// }

// int ifpossible(string a, string b){
//     if(a.length()!=b.length()) return 0;
//     set<char> cha;
//     for(int i=0; i<a.length(); i++){
//         cha.insert(a[i]);
//     }
//     set<char> chb;
//     for(int i=0; i<b.length(); i++){
//         chb.insert(b[i]);
//     }
//     if(cha.size()!=chb.size()) return 0;
//     sort(cha, cha+cha.size());
//     int arr[cha.size()];
//     int i=0;
//     for(auto ele : cha){
//         arr[i]=count(a, ele);
//         i++;
//     }
//     int brr[chb.size()];
//     int j=0;
//     for(auto ele : cha){
//         brr[j]=count(b, ele);
//         j++;
//     }
//     if(arr==brr) return 1;
//     return 0;

// }

void solution() {
    string a,b;
    cin>>a>>b;
    cout<<minOps(a,b)<<endl;

}
int main() {
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t = 1;
    si(t);
    while(t--) {
        solution();
    }
    return 0;
}