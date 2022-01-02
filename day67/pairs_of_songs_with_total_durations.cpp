#include <bits/stdc++.h>
using namespace std;

int numpairs(vector<int> &time){
    //find all pairs divisible by 60
    // int count = 0;
    // for(int i=0; i<time.size(); i++){
    //     for(int j=i+1; j<time.size(); j++){
    //         if((time[i]+time[j])%60 == 0){
    //             count++;
    //         }
    //     }
    // }
    // return count;

    int arr[60];
    memset(arr, 0, sizeof(arr));
    for(int i=0; i<time.size(); i++){
        arr[time[i]%60]++;
    }
    int count = 0;
    count+=((arr[0]-1)*arr[0])/2;
    count+=arr[30]*(arr[30]-1)/2;
    for(int i=0; i<30; i++){
            count += arr[i]*arr[60-i];
            // cout<<arr[i]<<" ";
            //30--> 2
            //20
            //40--> 2
            
    }
    
    return count;
}

int main(){
    int n;
    cin>>n;
    vector<int> time;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        time.push_back(x);
    }
    cout<<numpairs(time);
    return 0;
}