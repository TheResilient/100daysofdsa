#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits){
    int digit=0;
    int n=digits.size();
    for (int i = 0; i < digits.size(); i++)
    {
        int d=pow(10, (n-1-i));
        digit+=digits[i]*d;
    }
    digit++;
    vector<int> ans;
    while(true){
        int rem=digit%10;
        cout<<rem<<endl;
        ans.push_back(rem);
        digit=digit/10;
        if(digit==0) break;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<int>digits={1,2,3};
    vector<int>ans=plusOne(digits);
    // for(int i=0; i<ans.size(); i++) cout<<ans[i]<<endl;
    return 0;
}