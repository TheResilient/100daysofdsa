// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     int k=n>>1;
//     int o=0;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         o+=a[i];
//     }
//     o/=k;
//     for(int i=1; i<=n; i++){
//         if(a[i]>0){
//             int p=i;
//             for(int j=0; j<k; j++) if(a[i]+a[j]==o) p=j, j=n+1;
//             a[i]-=1;
//             a[p]=-1;
//             cout<<i<<" "<<p<<endl;
            
//         }
//     }

// }

// int main(){
//     solve();
// }
#include <bits/stdc++.h>
using namespace std;

int n,a[105],k,o;
int main()
{
    scanf("%d",&n);
    k=n>>1;
    for(int i=1;i<=n;i++)scanf("%d",a+i),o+=a[i];
    o/=k;
    for(int i=1;i<=n;i++){
            if(a[i]>0){
                       int p=i;
                       for(int j=i+1;j<=n;j++)if(a[i]+a[j]==o)p=j,j=n+1;
                       a[i]=-1,a[p]=-1;
                       printf("%d %d\n",i,p);
            }
    }
	//system("pause");
	return 0;
}