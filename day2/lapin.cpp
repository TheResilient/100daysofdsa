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
const int MAX_CHAR=26;
using namespace std;

void solution() {
    string s;
    cin>>s;
    // string start[s.length()];
    // string end[s.length()];
    // for(int i=0; i<(s.length()/2); i++) {
    //     start[i]=s[i];
    // }
    // for(int j=s.length()/2-1; j>=s.length()/2; j--){
    //     end[j]=s[j];
    // }
    // sort(start, start+s.length());
    // sort(end, end+s.length());
    // if(start==end) {
    //     cout<<"YES";
    // }
    // else{
    //     cout<<"NO";
    // }

    int count[MAX_CHAR]={0};
    int n=s.length();
    if(n==1){
        cout<<"YES";
        return;
    }
    for(int i=0, j=n-1; i<j; i++,j--){
        count[s[i]-'a']++;
        count[s[j]-'a']--;
    }
    for(int i=0; i<MAX_CHAR; i++){
        if(count[i]!=0) {
            cout<<"NO";
            return;
        }

    }
    cout<<"YES";
    return;
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