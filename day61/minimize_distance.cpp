#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> stops;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            stops.push_back(a);
        }
        vector<int> pos;
        vector<int> neg;
        for (int i = 0; i < n; i++)
        {
            if (i >= 0)
            {
                pos.push_back(i);
            }
            else
            {
                neg.push_back(i);
            }
        }

        sort(pos.begin(), pos.end(), greater<int>());
        sort(neg.begin(), neg.end(), greater<int>());
        vector<int> k_stops;
        int p = pos.size();
        int q = neg.size();
        // if (p > 0)
        // {
        //     int cur = min(k - 1, p - 1);
        //     while (cur < p)
        //     {
        //         k_stops.push_back(pos[cur]);
        //         cur += k;
        //     }

        //     if (k_stops.back() != pos[p - 1])
        //     {
        //         k_stops.push_back(pos[p - 1]);
        //     }
        // }

        // if (q > 0)
        // {
        //     int cur = min(k - 1, q - 1);
        //     while (cur < q)
        //     {
        //         k_stops.push_back(neg[cur]);
        //         cur += k;
        //     }

        //     if (k_stops.back() != neg[q - 1])
        //     {
        //         k_stops.push_back(neg[q - 1]);
        //     }
        // }

        // int ans=0;
        // sort(k_stops.begin(), k_stops.end());
        // int m = k_stops.size();
        // for(int i=0;i<m-1;i++)
        // {
        //     ans+=k_stops[i]*2;
        // }
        // ans+=k_stops[m-1];

        if(p>0){
            int cur = p-1;
            stops.push_back(pos[cur]);
            cur-=k;
            while(cur>=0){
                stops.push_back(pos[cur]);
                cur-=k;
            }
        }

        if(q>0){
            int cur = q-1;
            stops.push_back(-neg[cur]);
            cur-=k;
            while(cur>=0){
                stops.push_back(-neg[cur]);
                cur-=k;
            }
        }

        int ans =0;
        sort(stops.begin(),stops.end(), greater<int>());
        int z = stops.size();
        for(int i=0; i<z-1; i++){
            ans+=stops[i]*2LL;
        }

        ans+=stops[z-1];
        cout<<ans<<endl;

    }
    return 0;
}