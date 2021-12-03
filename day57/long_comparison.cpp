#include <bits/stdc++.h>
using namespace std;

void number(int x1, int p1, int x2, int p2){
    long long first = x1 * (pow(10, p1));
    long long second = x2 * (pow(10, p2));
    if(first > second){
        cout << ">";
    }
    else if(first < second){
        cout << "<";
    }
    else{
        cout << "=";
    }
    cout<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;
        number(x1, p1, x2, p2);
    }
    return 0;
}