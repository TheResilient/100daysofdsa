#include <bits/stdc++.h>
using namespace std;

//n participants of the competition were split into m teams in some manner so that each team has at least one participant. After the competition each pair of participants from the same team became friends.

int minimum(int n, int m){
    return (n/m + 1)*(n%m)*(n/m)/2 + (m-n%m)*(n/m)*(n/m-1)/2;
}

int maximum(int n, int m){
    return (n-(m-1))*(n-(m-1)-1)/2;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << minimum(n, m) << " " << maximum(n, m) << endl;
    return 0;
}

