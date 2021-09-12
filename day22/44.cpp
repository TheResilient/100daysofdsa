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

// void printmatrix(int n, int matr[][]){
//     int top=0, down=n-1, left=0, right=n-1;
//     int direction=0;
//     while(top<=down && left<=right){
//         if(direction==0){
//             for(int i=left; i<=right; i++){
//                 cout<<matr[top][i]<<" ";
//             }
//             top+=1;
//             // direction++;
//         }
//         else if(direction==1){
//             for(int i=top; i<=down; i++){
//                 cout<<matr[i][right]<<" ";
//             }
//             right-=1;
//             // direction++;
//         }
//         else if(direction==2){
//             for(int i=right; i<=left; i++){
//                 cout<<matr[down][i]<<" ";
//             }
//             down-=1;
//             // direction++;
//         }
//         else if(direction==3){
//             for(int i=down; i<=top; i++){
//                 cout<<matr[i][left]<<" ";
//             }
//             left+=1;
//         }
//         direction=(direction+1)%4;
//     }
// }

void solution() {
    int matr[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}, {13, 14, 15,16}};
    int n=4;
    int top=0, down=n-1, left=0, right=n-1;
    int direction=0;
    while(top<=down && left<=right){
        if(direction==0){
            for(int i=left; i<=right; i++){
                cout<<matr[top][i]<<" ";
            }
            top+=1;
            // direction++;
        }
        else if(direction==1){
            for(int i=top; i<=down; i++){
                cout<<matr[i][right]<<" ";
            }
            right-=1;
            // direction++;
        }
        else if(direction==2){
            for(int i=right; i>=left; i++){
                cout<<matr[down][i]<<" ";
            }
            down-=1;
            // direction++;
        }
        else if(direction==3){
            for(int i=down; i>=top; i++){
                cout<<matr[i][left]<<" ";
            }
            left+=1;
        }
        direction=(direction+1)%4;
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