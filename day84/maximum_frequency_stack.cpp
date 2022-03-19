#include<bits/stdc++.h>
using namespace std;

class FreqStack {
public:
    unordered_map<int,int> freq;
    unordered_map<int,int> freq_count;
    unordered_map<int,stack<int>> freq_stack;
    int max_freq;
    FreqStack(){
        max_freq = 0;
    }
    void push(int x) {
        freq[x]++;
        freq_count[freq[x]]++;
        freq_stack[freq[x]].push(x);
        max_freq = max(max_freq,freq[x]);
    }

    int pop() {
        int x = freq_stack[max_freq].top();
        freq_stack[max_freq].pop();
        freq_count[max_freq]--;
        if(freq_count[max_freq] == 0){
            freq_stack.erase(max_freq);
            freq_count.erase(max_freq);
            max_freq--;
        }
        freq[x]--;
        return x;
    }

};

int main(){
    int n;
    cin>>n;
    FreqStack f;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        f.push(x);
    }
    for(int i=0;i<n;i++){
        cout<<f.pop()<<" ";
    }
    return 0;
}