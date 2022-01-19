#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle){
    int n = haystack.size();
    int m = needle.size();
    if(m == 0) return 0;
    if(n < m) return -1;
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        if(haystack[i] == needle[j]){
            i++;
            j++;
        }
        else{
            i = i - j + 1;
            j = 0;
        }
    }
    if(j == m) return i - j;
    else return -1;
}

int main(){
    string haystack="hello";
    string needle = "ll";
    cout<<strStr(haystack,needle)<<endl;
    return 0;
}