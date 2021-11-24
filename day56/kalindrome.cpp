#include <bits/stdc++.h>
using namespace std;

int check_palindrome(int arr[], int n)
{
    int i, j;
    for (i = 0, j = n - 1; i < j; i++, j--)
        if (arr[i] != arr[j])
            return 0;
    return 1;
}

vector<int> remove_all_apearances(int arr[], int n, int x)
{
    int i, j;
    vector<int> v;
    for (i = 0; i < n; i++)
        if (arr[i] != x)
            v.push_back(arr[i]);
    return v;
}

int start(int arr[], int n){
    for(int i=0; i<n/2; i++){
        if(arr[i] != arr[n-i-1]){
            vector<int> first = remove_all_apearances(arr, n, arr[i]);
            vector<int> second = remove_all_apearances(arr, n, arr[n-i-1]);            
            if(check_palindrome(first.data(), first.size())){
                return 1;
            }
            if(check_palindrome(second.data(), second.size())){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int m;
        cin>>m;
        int arr[m];
        for(int j=0; j<m; j++){
            cin>>arr[j];
        }
        int answer;
        if(check_palindrome(arr, m)){
            answer=1;
        }
        else answer = start(arr, m);
        if(answer==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}