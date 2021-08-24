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

int prec(char c) {
    if(c == '^')
        return 3;
    else if(c == '/' || c=='*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
 
// The main function to convert infix expression
//to postfix expression
void infixToPostfix(string s) {
 
    stack<char> st; //For stack operations, we are using C++ built in stack
    string result;
 
    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
 
        // If the scanned character is
        // an operand, add it to output string.
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;
 
        // If the scanned character is an
        // ‘(‘, push it to the stack.
        else if(c == '(')
            st.push('(');
 
        // If the scanned character is an ‘)’,
        // pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if(c == ')') {
            while(st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
 
        //If an operator is scanned
        else {
            while(!st.empty() && prec(s[i]) <= prec(st.top())) {
                result += st.top();
                st.pop(); 
            }
            st.push(c);
        }
    }
 
    // Pop all the remaining elements from the stack
    while(!st.empty()) {
        result += st.top();
        st.pop();
    }
 
    cout << result << endl;
}


void solution() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    infixToPostfix(s);

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