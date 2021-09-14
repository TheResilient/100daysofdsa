#include<bits/stdc++.h>
#include<algorithm>
#include<sstream>
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

int check(string s, string s1, string s2){
    // stringstream geek(s2)
    // int x=0;
    // geek>>x;
    priority_queue<int> numbers1;
    priority_queue<char> strings1;
    for(int i=0; i<s.size(); i++){
        strings1.push(s[i]);
    }
    for(int i=0; i<s1.size(); i++){
        numbers1.push(s1[i]);
    }

    priority_queue<char> strings;
    priority_queue<int> numbers;
    for(int i=0; i<s2.size(); i++){
        if(isdigit(s2[i])==true){
            numbers.push(s2[i]);
        }
        else{
            strings.push(s2[i]);
        }
    }

    if(strings == strings1 && numbers==numbers1){
        return 1;
    }

    return 0;

}

void solution() {
    string s,s1;
    cin>>s>>s1;
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n;i++) cin>>arr[i];
    int i=0;
    while(n>0){
        if(check(s, s1, arr[i])){
            cout<<"Yea"<<endl;
        }
        else cout<<"Na"<<endl;
        i++;
        n--;
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