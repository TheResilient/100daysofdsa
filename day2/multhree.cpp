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


void solution() {
    int k,dig0,dig1;
    cin>>k>>dig0>>dig1;
    long long int sum =0;
    int temp = (dig0+dig1)%10;
    sum=dig0+dig1;
    if(k==2){
        if(sum%3==0) {
            cout<<"YES";
            return;
        }
        else{
            cout<<"NO";
            return;
        
        }
    }

    sum+=temp;
    long long int numberofGroups = (k-3)/4;
    int remNumberofDigits = (k-3)%4;
    if(temp == 5 || temp ==0){
        sum+=(numberofGroups*0);
    }
    else sum+=(numberofGroups*20);
    for(int i=0; i<remNumberofDigits; i++){
        temp=(2*temp)&10;
        sum+=temp;
    }
    if(sum%3==0){
        cout<<"YES";
        return;
    }
    else{
        cout<<"NO";
        return;
    }

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