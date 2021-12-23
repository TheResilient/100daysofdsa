// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
//     int k,n;
//     cin>>k>>n;
//     int sum=0;
//     while(n){
//         sum+=n%10;
//         // cout<<sum<<" ";
//         n/=10;
//         // cout<<n<<" ";
//     }
//     if(sum<k) cout<<k-sum<<endl;
//     else cout<<0<<endl;
// }

// int main(){
//     solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int N=100005;
char a[N];
int main()
{
    int k;
    scanf("%d",&k);
    scanf("%s",&a);
    int len=strlen(a);
    int s=0;
    for(int i=0;i<len;i++){
        s+=a[i]-'0';
    }
    sort(a,a+len);
    if(s>=k) cout<<0<<endl;
    else {
        int t=0;
        for(int i=0;i<len;i++){
            s+=9-(a[i]-'0');
            t++;
            if(s>=k){
                break;
            }
        }
        cout<<t<<endl;
     }
     return 0;
}