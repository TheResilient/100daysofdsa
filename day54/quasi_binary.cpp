#include <bits/stdc++.h>
using namespace std;

int decToBinary(int n){
    int binary = 0;
    int i = 0;
    while(n > 0){
        binary += (n % 2) * pow(10, i);
        n /= 2;
        i++;
    }
    return binary;
}

int convert_binary_to_decimal(int n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

// string binary_to_string(int n)
// {
//     string s = "";
//     while (n != 0)
//     {
//         s = to_string(n % 2) + s;
//         n /= 2;
//     }
// }


int main(){
    int n;
    cin >> n;
    int j = decToBinary(n);
    int arr[64];
    for(int i = 1; i <= 64; i++){
        int k = decToBinary(i);
        arr[i]=k;
    }
    
    int count=0;
    vector<int> v;
    for(int i=64; i>=1; i--){
        if(arr[i]<=n){
            while(arr[i]<=n){
                n-=arr[i];
                v.push_back(arr[i]);
                count++;
            }
        }
    }
    cout << count << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}