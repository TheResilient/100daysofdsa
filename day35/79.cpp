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

bool isSafe(matrix[n][m], int visited[n][m], int i, int j, int n, int m){

    if(i<m && j<n && i>=0 && j>=0 && visited[i][j] == 0)
        return true;
    return false;
}

bool dfs(char matrix[n][m], int i, int j, int visited[n][m], char str[], int index){

    if(index == strlen(str))
        return true;

    // row moves
    int x[] = {-1, 0, 1, -1};
    // col moves
    int y[] = {0, -1, 1, 0};

    if(str[index] == matrix[i][j]){
        visited[i][j] = 1;
        // for all the neighbours
        for(int k = 0; k<4; k++){
            // mark given position visited
            next_x = i + x[k];
            next_y = j + y[k];

            if(isSafe(matrix, visited, next_x, next_y, n, m)){
                if(dfs(matrix, next_x, next_y, visited, str, index+1) == true)
                    return true;
            }
        }
        // backtrack
        visited[i][j] = 0;

    }

    return false;

}

bool isPresent(char matrix[][], int n, int m, char str[]){

    // visited initialized to 0
    int visited[n][m] = {0};

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            if(dfs(matrix, i, j, n, m ,visited, str, 0) == true)
                return true;
        }


    return false;
}

void solution() {
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    string str;
    cin>>str;
    cout<<isPresent(arr,n, m , str)<<endl;


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