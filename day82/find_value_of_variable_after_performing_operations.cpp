#include<bits/stdc++.h>
using namespace std;

int finalValueAfterOperations(vector<string>& operations){
    int ans=0;
    for(int i=0; i<operations.size(); i++){
        if(operations[i]=="++x" or operations[i]=="x++") ans++;
        else ans--;
    }
    return ans;
}

int main(){
    vector<string> operations = {"x++", "++x", "x--", "--x"};
    cout << finalValueAfterOperations(operations) << endl;
    return 0;
}