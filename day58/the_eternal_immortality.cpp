#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define inf 1000000000000000


// void divide_two_factorials(long long n, long long k) {
//     long long ans = 1;
//     for(int i=n+1; i<=k; i++) {
//         ans *= i;
//     }
//     cout << ans%10 << endl;
// }

// int main(){
//     long long n,m;
//     cin>>n>>m;
//     divide_two_factorials(n,m);
//     return 0;
// }

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m,x;
    ll a,b,d,c;

    scanf("%I64d%I64d",&a,&b);

    c=a+1;

    //last digit of b
    x=b%10;

    m=x;
    k=1;

    for(i=b; i>=c; i--)
    {
        k*=x;
        x--;

        if(x==0 && i>c)
        {
            printf("0");
            return 0;
        }

        if(x<0)
            x=9;
    }

    k=k%10;
    printf("%I64d",k);

    return 0;
}

