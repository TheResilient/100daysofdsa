// input
//  5
//  Alice Bob Cacey Deepak Emma
//  10 14
//  11 12
//  10 15
//  12 16
//  14 16

// output
//  5
//  10 11 2 Alice Cacey
//  11 12 3 Alice Bob Cacey
//  12 14 3 Alice Cacey Deepak
//  14 15 3 Cacey Deepak Emma
//  15 16 2 Deepak Emma

#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> add, int n, string s[], int a[], int b[]){
    vector<string> answer;
    sort(add.begin(), add.end());
    for (int i = 0; i < add.size() - 1; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (add[i] >= a[j] && add[i + 1] <= b[j] && add[i] != add[i + 1])
            {
                count++;
            }
        }
        if (count > 0)
        {

            // cout << add[i] << " " << add[i + 1] << " " << count << " ";
            string ans=to_string(add[i])+" "+to_string(add[i+1])+" "+to_string(count)+" ";
            vector<string> v;
            for (int j = 0; j < n; j++)
            {
                if (add[i] >= a[j] && add[i + 1] <= b[j])
                {
                    if (add[i] != add[i + 1])
                    {
                        // cout << s[j] << " ";
                        v.push_back(s[j]);
                        // ans+=s[j]+" ";
                    }
                }
            }
            sort(v.begin(), v.end());
            for (int j = 0; j < v.size(); j++)
            {
                // cout << v[j] << " ";
                ans+=v[j]+" ";
            }
            answer.push_back(ans);
        }
    }
    cout<<answer.size()<<endl;
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<endl;
    }
}


int main()
{
    int n;
    cin >> n;
    string s[n];
    int a[n], b[n];
    vector<int> add;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        add.push_back(a[i]);
        add.push_back(b[i]);
    }
    solution(add, n, s, a, b);
}