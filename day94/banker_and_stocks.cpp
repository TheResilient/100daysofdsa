#include <bits/stdc++.h>
using namespace std;

string solution(long n)
{

    int odd = 0, even = 0;
    // optimization
    for (int i = 1; i <= 1 + sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
                even++;
            else
                odd++;
            if (n / i != i)
            {
                if ((n / i) % 2 == 0)
                    even++;
                else
                    odd++;
            }
        }
    }
    if (odd > even)
        return "SELL";
    else if (even > odd)
        return "BUY";
    return "PASS";
}

//optimization
string solution2(long n){
    int odd=0, even=0;
    // second approach
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            if(i%2==0) even++;
            else odd++;
        }
    }
    if(odd>even) return "SELL";
    else if(even>odd) return "BUY";
    return "PASS";
}

int main()
{
    long n;
    cin >> n;
    string answer = solution(n);
    cout << answer << endl;
}
