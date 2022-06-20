#include<bits/stdc++.h>
using namespace std;

vector<string> lexisort(vector<string>& products, string start){
    int n=start.length();
    vector<string> res;
    for(int i=0; i<products.size(); i++){
        if(products[i].substr(0,n)==start){
            res.push_back(products[i]);
        }
    }
    sort(res.begin(),res.end());
    if(res.size()<3) return res;
    return res(0,3);
}

vector<vector<string>> suggestedProducts(vector<string> &products, string searchWord)
{
    vector<vector<string>> res;
    for(int i=0; i<searchWord.length(); i++){
        res.push_back(lexisort(products, searchWord.substr(0,i)));
    }
    return res;

}