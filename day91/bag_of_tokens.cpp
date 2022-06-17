#include<bits/stdc++.h>
using namespace std;

int bagOfTokensScore(vector<int>& tokens, int power){
    sort(tokens.begin(),tokens.end());
    int result=0,points=0;
    int i=0,j=tokens.size()-1;
    while(i<=j){
        if(power>=tokens[i]){
            power-=tokens[i];
            result=max(result, ++points);
            i++;
        }
        else if(result>0){
            power+=tokens[j];
            points--;
            j--;
        }
        else{
            break;
        }
    }
    return result;
}