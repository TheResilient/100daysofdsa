#include <bits/stdc++.h>
using namespace std;

void generateParenthesisHelper(string s, int left, int right, vector<string>& res){
    if(left == 0 && right == 0){
        res.push_back(s);
        return;
    }
    if(left > 0) generateParenthesisHelper(s + "(", left - 1, right, res);
    if(right > left) generateParenthesisHelper(s + ")", left, right - 1, res);
}

vector<string> generateParenthesis(int n) {
    vector<string> res;
    string s;
    generateParenthesisHelper(s, n, n, res);
    return res;
}

int main(){
    int n;
    cin>>n;
    vector<string> res = generateParenthesis(n);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] <<" ";
    }
    return 0;
}

