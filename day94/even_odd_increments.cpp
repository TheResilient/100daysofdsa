// 
// You are given n of integers a1,a2,…,an. Process q

// queries of two types:

//     query of the form "0 xj

// ": add the value xj to all even elements of the array a
// ,
// query of the form "1 xj
// ": add the value xj to all odd elements of the array a

//     .

// Note that when processing the query, we look specifically at the odd/even value of ai

// , not its index.

// After processing each query, print the sum of the elements of the array a

// .

// Please note that the answer for some test cases won't fit into 32-bit integer type, so you should use at least 64-bit integer type in your programming language (like long long for C++).

// Input
// 4
// 1 1
// 1
// 1 1
// 3 3
// 1 2 4
// 0 2
// 1 3
// 0 5
// 6 7
// 1 3 2 4 10 48
// 1 6
// 0 5
// 0 4
// 0 5
// 1 3
// 0 12
// 0 1
// 6 7
// 1000000000 1000000000 1000000000 11 15 17
// 0 17
// 1 10000
// 1 51
// 0 92
// 0 53
// 1 16
// 0 1

// Output
// 2
// 11
// 14
// 29
// 80
// 100
// 100
// 100
// 118
// 190
// 196
// 3000000094
// 3000060094
// 3000060400
// 3000060952
// 3000061270
// 3000061366
// 3000061366

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        long long int a[n];
        long long even=0,odd=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                even+=a[i];
            }
            else{
                odd+=a[i];
            }
        }
        int q1=q;
        while(q--){
            int type,x;
            cin>>type>>x;
            
            for(int i=0;i<n;i++){
                if(type==0 && a[i]%2==0){
                    a[i]+=x;
                    
                }
                else if(type==1 && a[i]%2!=0){
                    a[i]+=x;
                    
                }
            }
            long long sum=0;
            for(int i=0;i<n;i++){
                sum+=a[i];
            }
            cout<<sum<<endl;

        }
        
    }
}
