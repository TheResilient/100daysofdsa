#include<bits/stdc++.h>
#include<sstream>
using namespace std;

vector<string> letterCombinations(string digits){
    vector<vector<char>> add;
    if(n=='2'){
        add.push_back({'a','b','c'});
    }
    if(n=='3'){
        add.push_back({'d','e','f'});
    }
    if(n=='4'){
        add.push_back({'g','h','i'});
    }
    if(n=='5'){
        add.push_back({'j','k','l'});
    }
    if(n=='6'){
        add.push_back({'m','n','o'});
    }
    if(n=='7'){
        add.push_back({'p','q','r','s'});
    }
    if(n=='8'){
        add.push_back({'t','u','v'});
    }
    if(n=='9'){
        add.push_back({'w','x','y','z'});
    }
    vector<string>ans;
    int len = digits.length();
    if (len==1){
        string temp="";
        for(int i=0; i<add[stoi(digits)-2].size(); i++){
            temp += add[stoi(digits) - 2][i];
        }
        ans.push_back(temp);
    }
    if(len==2){
        for(int i=0; i<add[stoi(digits[0])-2].size(); i++){
            string temp=add[stoi(digits[0])-2][i];
            for(int j=0; j<add[stoi(digits[1])-2].size(); j++){
                temp+=add[stoi(digits[1])-2][j];                
            }
            ans.push_back(temp);
        }
    }
    if(len==3){
        for (int i = 0; i < add[stoi(digits[0]) - 2].size(); i++)
        {
            string temp = add[stoi(digits[0]) - 2][i];
            for (int j = 0; j < add[stoi(digits[1]) - 2].size(); j++)
            {
                temp += add[stoi(digits[1]) - 2][j];
                for (int k = 0; k < add[stoi(digits[2]) - 2].size(); k++)
                {
                    temp += add[stoi(digits[2]) - 2][k];
                    ans.push_back(temp);
                }
            }
        }
    }
    if(len==4){
        for (int i = 0; i < add[stoi(digits[0]) - 2].size(); i++)
        {
            string temp = add[stoi(digits[0]) - 2][i];
            for (int j = 0; j < add[stoi(digits[1]) - 2].size(); j++)
            {
                temp += add[stoi(digits[1]) - 2][j];
                for (int k = 0; k < add[stoi(digits[2]) - 2].size(); k++)
                {
                    temp += add[stoi(digits[2]) - 2][k];
                    for (int l = 0; l < add[stoi(digits[3]) - 2].size(); l++)
                    {
                        temp += add[stoi(digits[3]) - 2][l];
                        ans.push_back(temp);
                    }
                }
            }
        }
    }
    return ans;
}

int main(){
    string s="24";
    vector<string> ss=letterCombinations(s);
    for(int i=0; i<s.length()*s.length(); i++){
        cout<<ss[i]<<endl;
    }
    return 0;
}