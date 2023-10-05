#include<bits/stdc++.h>
using namespace std;

int countallcombinations(vector<int> &arr){
    set<vector<int>> s;
    for(int i=0;i<arr.size()-3; i++){
        for(int j=i+1; j<arr.size()-2; j++){
            for(int k=j+1; k<arr.size()-1; k++){
                for(int l=k+1; l<arr.size(); l++){
                    s.insert({arr[i], arr[j], arr[k], arr[l]});
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<endl;
                }
            }
        }
    }
    return s.size();
}

int main(){
    // int t; cin>>t;
    // while(t--){
    //     int n; cin>>n;
    //     vector<int>a={0,1,2,3,4,5,6,7,8,9};
    //     for(int i=0; i<n; i++){
    //         int x; cin>>x;
    //         for(int i=0; i<a.size(); i++){
    //             if(a[i]==x){
    //                 for(int j=i; j<a.size(); j++){
    //                     a[j]=a[j+1];
    //                 }
    //             }
    //         }
    //     }
    //     // calculate the number of different sequences of 4 digits and two repeating digits
    //     int ans=0;
    //     for(int i=0; i<a.size()-1; i++){
    //         for(int j=i+1; j<a.size(); j++){
    //            vector<int>arr={3,3,7,7};
    //             ans+=combinations(arr);
    //         }
    //     }
    //     cout<<ans<<endl;
    // }
    vector<int>arr={3,3,7,7};
    cout<<countallcombinations(arr);
}