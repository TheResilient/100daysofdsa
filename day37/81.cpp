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

// char min(char a, char b){
//     if(a=='I' and b!='I') return a;
//     else if(a!='I' and b=='I') return b;
//     else if(a=='V' and b!='V') return a;
//     else if(a!='V' and b=='V') return b;
//     else if(a=='X' and b!='X') return a;
//     else if(a!='X' and b=='X') return b;
//     else if(a=='L' and b!='L') return a;
//     else if(a!='L' and b=='L') return b;
//     else if(a=='C' and b!='C') return a;
//     else if(a!='C' and b=='C') return b;
//     else if(a=='D' and b!='D') return a;
//     else if(a!='D' and b=='D') return b;
//     else if(a=='M' and b!='M') return a;
//     else if(a!='M' and b=='M') return b;
//     else if(a==b) return a;
    
// }

int value(char r){
    if(r=='I') return 1;
    if(r=='V') return 5;
    if(r=='X') return 10;
    if(r=='L') return 50;
    if(r=='C') return 100;
    if(r=='D') return 500; 
    if(r=='M') return 1000;
    return -1;
}

int romantodecimal(string str){
    int len = str.length();
    int res=0;
    for(int i=0; i<len; i++){
        int s1=value(str[i]);
        if(i+1<len){
            int s2 = value(str[i+1]);
            if(s1>=s2){
                res = res +s1;
            }
            else{
                res=res+s2-s1;
                i++;
            }
        }
        else{
            res=res+s1;
        }
    }
    return res;
    

}

void solution() {
    string s;
    cin>>s;
    cout<<romantodecimal(s)<<endl;

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