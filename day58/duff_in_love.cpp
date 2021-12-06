// #include <bits/stdc++.h>
// using namespace std;

// vector<int> find_all_divisors(int n) {
//     vector<int> divisors;
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             divisors.push_back(i);
//             if (i != n / i) {
//                 divisors.push_back(n / i);
//             }
//         }
//     }
//     return divisors;
// }

// int is_prime(int n) {
//     if (n == 1) {
//         return 0;
//     }
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             return 0;
//         }
//     }
//     return 1;
// }

// bool check_all_divisors_are_prime(int n) {
//     vector<int> divisors = find_all_divisors(n);
//     sort(divisors.begin(), divisors.end());
//     divisors.erase(divisors.begin());
//     for (int i = 0; i < divisors.size(); i++) {
        
//         if (!is_prime(divisors[i])) {
//             return false;
//         }
//     }
//     return true;
// }

// void solve(){
//     int n;
//     cin>>n;
//     vector<int> divisors = find_all_divisors(n);
//     sort(divisors.begin(), divisors.end());
//     for (int i = 0; i < divisors.size(); i++) {
//         cout<<divisors[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=divisors.size()-1;i>=0;i--){
//         if(check_all_divisors_are_prime(divisors[i])){
//             cout<<divisors[i]<<endl;
//             return;
//         }
//     }
// }

// int main(){
//     solve();
// }


#include<bits/stdc++.h>
using namespace std;
int main(){

    long long ans,i,j,n,m;
    vector<long long>v;
    while(cin>>n)
    {
       for(i=1;i*i<=n;i++)
       {
           if(n%i==0)
           {
               v.push_back(i);
               v.push_back(n/i);
           }
       }
       sort(v.begin(),v.end());
       m=v.size();
       for(i=m-1;i>=0;i--)
       {
           int flag=1;
           for(j=2;j*j<=v[i];j++)
           {
               if(v[i]%(j*j)==0)
               {
                   flag=0;break;
               }
           }
           if(flag==1)git 
            {
                ans=v[i];break;
            }

       }
       cout<<ans<<endl;
    }
return 0;
}