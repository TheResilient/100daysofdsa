#include <bits/stdc++.h>
using namespace std;
int arr[10000000];
// determine if n is t-prime where t-prime is a number with exact three divisors
// bool is_t_prime(int n) {
//     int cnt = 0;
//     for (int i = 1; i <= n / 2; i++) {
//         if (n % i == 0) {
//             cnt++;
//         }
//         if(cnt>2) {
//             return false;
//         }
//     }
//     return cnt == 2;
// }


int main() {
    int i,j;
    arr[0]=arr[1]=1;
    for(i=2; i*i<=10000000; i++)
    {
        if(arr[i]==0)
        {
            for(j=2; i*j<=10000000; j++)
            {
                arr[i*j]=1;
            }
        }
    }
    int n;
    cin >> n;
    // for (int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     if (is_t_prime(x)) cout << "YES" << endl;
    //     else cout << "NO" << endl;
    // }

    long long int in;
    int t;
    for(int i=0; i<n; i++)
    {
        cin>>in;
        t=sqrt(in);
        if(t==sqrt(in)&&arr[t]==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}