//print sum of two numbers
#include<iostream>

using namespace std;

int sum(int a, int b)
{
    return a+b;
}

int main(int argc, char const *argv[])
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum(a,b);
    return 0;
}
