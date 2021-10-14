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

void findseq(int arr[], int brr[], int n, int m){
    vector<int>crr;
    vector<int>first;
    vector<int>second;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i]==brr[j]) {
                crr.push_back(arr[i]);
                first.push_back(i);
                second.push_back(j);
            }
        }
    }
    int total=0;
    int i1=0;
    int k=first.at(i1);
    int k1=second.at(i1);
    while(i1<crr.size()+1){
        int j=first.at(k+1);
        if(first.at(k+1)>=n){
            j=n-1;
        }
        int firstsum=0;
        for(int i=first.at(k); i<j; i++){
            firstsum+=arr[i];
        }
        
        int p=second.at(k1+1);
        if(first.at(k1+1)>=m){
            p=m-1;
        }
        int secondsum=0;
        for(int i=second.at(k1); i<p; i++){
            secondsum+=brr[i];
        }
        if(firstsum>secondsum) total+=firstsum;
        else total+=secondsum;
        i1++;
    }
    cout<<total<<endl;
}

void solution() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int m;
    cin>>m;
    int brr[m];
    for(int i=0; i<m; i++) cin>>brr[i];
    findseq(arr, brr, n, m);


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