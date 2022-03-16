#include<bits/stdc++.h>
using namespace std;

bool validateStackSequence(vector<int>& pushed, vector<int>& popped)
{
    stack<int> st;
    int i = 0;
    for (auto num : pushed)
    {
        st.push(num);
        while (!st.empty() && st.top() == popped[i])
        {
            st.pop();
            i++;
        }
    }
    return st.empty();
}

int main(){
    vector<int> pushed = {1, 2, 3, 4, 5};
    vector<int> popped = {4, 5, 3, 2, 1};
    cout << validateStackSequence(pushed, popped) << endl;
    return 0;
}