#include <bits/stdc++.h>
using namespace std;

int find(int n, int m){
    // int first = 2;
    // vector<int> v;
    // int i=1;
    // v.push_back(1);
    // while(true){
    //     vector<int> v2=v;
    //     v.push_back(first++);
    //     // first++;
    //     v.insert(v.end(), v2.begin(), v2.end());
    //     if(i==m) break;
    //     i=i+v2.size();
    // }
    // // for(int i=0; i<v.size(); i++){
    // //     cout<<v[i]<<" ";
    // // }
    // cout<<endl;
    // return v[m-1];

    int k=m, j;
    m=pow(2,n-1);

    while(m!=k)
    {
        if(k>m)
        {
            j=k-m;
            k=m-j;
        }

        n--;
        m=pow(2,n-1);
    }

    // cout<<n;
    return n;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << find(n, m) << endl;
    return 0;
}