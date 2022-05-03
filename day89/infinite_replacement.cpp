#include<bits/stdc++.h>
using namespace std;

// For each testcase, print the number of different strings s that can be obtained after an arbitrary amount of moves(including zero).If the number is infinitely large, print - 1. Otherwise, print the number.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a; cin>>a;
        string b; cin>>b;
        if(a==b)
        {
            cout<<0<<endl;
        }
        else
        {
            int ac = 0;
            for (int i = 0; i < b.length(); i++)
            {
                if (a[i] == 'a')
                {
                    ac++;
                }
            }
            if (ac < b.length())
                cout << -1 << endl;
            else{
            int c=1;
            for(int i=0; i<a.size(); i++)
            {
                string original=a;
                if(a[i]=='a')   {
                    a=a.substr(0,i)+b+a.substr(i+1);
                }
                if(a!=original)
                {
                    c++;
                }
            }
            // if(c>100) cout<<-1<<endl;
            cout<<c<<endl;
            }
        }

    }
    return 0;
}