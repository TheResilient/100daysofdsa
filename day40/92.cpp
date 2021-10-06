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
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();
    int m=s2.length();
    vector<string> s;
    for (int len = 1; len <= n; len++)
    {   
        // Pick ending point
        for (int i = 0; i <= n - len; i++)
        {
            //  Print characters from current
            // starting point to current ending
            // point. 
            int j = i + len - 1;           
            for (int k = i; k <= j; k++)
                s.push_back(s1[k]);
        }
    }
    vector<int>strr;
    int min=0;
    int flag;
    int n=0;
    for(int i=0; i<s.size(); i++){
        string str = s.at(i);
        int sum=0;
        for(int j=0; j<str.length(); j++){
            for(int d=0; d<m; d++){
                if(str[j]==s2[d]) sum++;
            }
        }
        if(sum==m) {
            strr.push_back(str);
            if(str.length()<min){
                min==str.length();
                flag=n;
            }
            n++;
        }
    }

    cout<<strr.at(flag)<<endl;
    // vector<string> vec;
    // int sum=0;
    // for(int i=0; i<n-1; i++){
    //     string s="";
    //     for(int j=i+1; i<n; j++){
    //         for(int k=0; k<m; k++){
    //             if(s1[j]==s2[k]) sum++;
    //         }
    //         s+=s1[j];
    //     }
    //     if(sum==m) vec.push_back(s);
    // }
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