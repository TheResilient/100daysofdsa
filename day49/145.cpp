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

class Node
{
    public:
    int data;
    Node* next;
};

void removeduplicate(Node * head){
    Node * current = head;
    Node *next_next;
    if(current==NULL) return ;
    while(current->next!=NULL){
        // if(current->data==current->next->data){
        //     next_next=current->next->next;
        //     free(current->next);
        //     current->next=next_next;
        // }
        // else{
        //     current=current->next;
        // }
        current_next=current->next;
        while(current_next->next!=NULL){
            if(current_next->data==current_next->next->data){
                next_next=current_next->next->next;
                free(current_next->next);
                current_next->next=next_next;
            }
            else{
                current_next=current_next->next;
            }
        }

    }

}

void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();
             
    /* put in the data */
    new_node->data = new_data;
                 
    /* link the old list off the new node */
    new_node->next = (*head_ref);    
         
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

void printlist(Node *node){
    while(node!=NULL){
        cout<<" "<<node->data;
        node=node->next;
    }
}

void solution() {
    Node* head=NULL;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        push(&head, k);
    }

    printlist(head);
    removeduplicate(head);
    cout<<endl;
    printlist(head);

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