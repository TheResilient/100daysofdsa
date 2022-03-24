#include<bits/stdc++.h>
using namespace std;

int numRescueBoats(vector<int>& people, int limit)
{
    sort(people.begin(), people.end());
    int i = 0, j = people.size() - 1, count = 0;
    while (i < j)
    {
        if (people[i] + people[j] <= limit)
        {
            i++;
            j--;
        }
        else
        {
            j--;
            count++;
        }
    }
    return count + j + 1;
}

int main(){
    int n, limit;
    cin>>n>>limit;
    vector<int> people(n);
    for(int i = 0; i < n; i++)
        cin>>people[i];
    cout<<numRescueBoats(people, limit)<<endl;
    return 0;
}