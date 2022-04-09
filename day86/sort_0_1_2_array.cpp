#include<bits/stdc++.h>
using namespace std;

void sorting(vector<int>num){
    int n=num.size();
    int zero=0;
    int one=0;
    int two=0;
    for(int i=0; i<n; i++){
        if(num[i]==0) zero++;
        else if(num[i]==1) one++;
        else if(num[i]==2) two++;
    }
    // cout << zero << " " << one << " " <<two << endl;
    int zero1=zero;
    int one1=one;
    int two1=two;
    for(int i=0; i<zero+one+two; i++){
        if(zero1>0){
            cout<<0<<" ";
            zero1--;
        }
        else if(one1>0){
            cout<<1<<" ";
            one1--;
        }
        else if(two1>0){
            cout<<2<<" ";
            two1--;
        }
    }
    cout<<endl;
}

int main(){
    vector<int>num={2,0,2,1,1,0};
    sorting(num);
    return 0;
}