#include<bits/stdc++.h>
using namespace std;

bool isPal(string::iterator begin, string::iterator end){
    while(begin < end){
        if(*begin != *end)
            return false;
        begin++;
        end--;
    }
    return true;
}

int possiblePlainByRemovingOneChar(string str){
    int low=0, high=str.length()-1;
    while(low<high){
        if(str[low]==str[high]){
            low++;
            high--;
        }
        else{
            if(isPal(str.begin()+low+1, str.begin()+high)) return low;
            if(isPal(str.begin()+low, str.begin()+high+1)) return high;
        }
    }
    return -1;
}

int main(){
    string s;
    cin>>s;
    cout << possiblePlainByRemovingOneChar(s)<<endl;
    return 0;
}