#include<bits/stdc++.h>
using namespace std;

template<typename A, typename Func>

bool find_first_position(A arr, Func fn, tuple<int,int>& pos){
    bool result = false;
    for(int i = 0; i < arr.size(); i++){
        if(fn(arr[i])){
            pos = make_tuple(i, arr[i]);
            result = true;
            break;
        }
    }
    return result;
}

int main(){
    
}