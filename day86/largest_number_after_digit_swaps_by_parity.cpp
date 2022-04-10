#include<bits/stdc++.h>
using namespace std;

int largestInteger(int num){
    string snum = to_string(num);
    priority_queue<int, vector<int>,greater<int>>pose;
    priority_queue<int, vector<int>, greater<int>> poso;
    priority_queue<int>even;    
    priority_queue<int>odd; 
    // cout<<snum.length()   <<endl;
    for(int i=0; i<snum.length(); i++){
        int n=snum[i]-'0';
        // cout<<"--->"<<n<<endl;
        if(n%2==0){
            pose.push(i);
            even.push(n);
            // cout<<i<<" "<<n<<" "<<even.size()<<endl;

        }
        else{
            poso.push(i);
            odd.push(n);
            // cout << i << " " << n << endl;
        }
    }
    vector<int>ans(snum.length());
    while (!even.empty())
    {
        ans[pose.top()]=even.top();
        pose.pop();
        even.pop();
    }
    while (!odd.empty())
    {
        ans[poso.top()]=odd.top();
        poso.pop();
        odd.pop();
    }
    string ss="";
    for(int i=0; i<ans.size(); i++){
        ss+=to_string(ans[i]);
    }
    return stoi(ss);
    // while(!even.empty()){
    //     cout<<even.top();
    //     even.pop();
    // }
}

int main(){
    int n; cin>>n;
    cout<<largestInteger(n);
    return 0;
}