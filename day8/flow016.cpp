#include<iostream>
using namespace std;

void lcm(int,int);

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    int a,b;

    
    cin>>a;
    
    cin>>b;

    cout<<gcd(a,b)<<" ";
    lcm(a,b);
  return 0;
}



//function to calculate l.c.m
void lcm(int a,int b)
{
    int m,n;

    m=a;
    n=b;

    while(m!=n)
    {
        if(m < n)
        {
        m=m+a;
        }
        else
        {
            n=n+b;
            }
    }

    cout<<m<<"\n";
}