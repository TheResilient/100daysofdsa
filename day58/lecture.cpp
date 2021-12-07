#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<pair<string, string> > v;
    for(int i=0; i<m; i++){
        string s1,s2;
        cin>>s1>>s2;
        v.push_back(make_pair(s1,s2));
    }
    // cout<<"------------------------->"<<endl;
    // for(int i=0; i<m; i++){
    //     cout<<v[i].first<<endl;

    // }
    // cout<<"------------------------->"<<endl;
    vector<string> v1;
    for(int i=0; i<n; i++){
        string sss;
        cin>>sss;
        v1.push_back(sss);
    }
    // cout<<v[0].first<<endl;
    for(int i=0; i<n; i++){
        string k = v1[i];
        // cout<<v1[i]<<endl;
        for(int j=0; j<m; j++){
            if(k==v[j].first or k==v[j].second){
                string smallest;
                string secondd = v[j].second;
                string firstt = v[j].first;
                int secsize=secondd.size();
                int firsize=firstt.size();
                if(secsize<firsize) cout<<v[j].second<<" ";
                else cout<<v[j].first<<" ";
                
            }
        }
    }
}

int main(){
    solve();
    return 0;
}