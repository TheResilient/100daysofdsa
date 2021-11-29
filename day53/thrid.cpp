#include <bits/stdc++.h> 

using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int odd_color(long n, long m)
{
    long a=n*m%3;
    long x;
    if(a!=0){
        x =n*m/3 +1;
    }
    else{
        x =n*m/3;
    }
    // x = x*m;
    // long b=m%3;
    // long y;
    // if(b!=0){
    //     y =m/3 +1;
    // }
    // else{
    //     y =m/3;
    // }
    // y=y*n;
    // if(x>y) return y;
    return x;
       
}

int main(){
    int n;
    cin>>n;
    while(n>0){
        long a,b;
        cin>>a>>b;
        cout<<odd_color(a,b)<<endl;
        n--;
    }
}
