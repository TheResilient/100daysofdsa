#include <bits/stdc++.h>
using namespace std;

// use bfs dfs

bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
{
    if (prerequisites.size() == 0)
        return 1;
    for (int i = 0; i < prerequisites.size() - 1; i++)
    {
        for (int j = i + 1; j < prerequisites.size(); j++)
        {
            if (prerequisites[i][0] == prerequisites[i][1] or prerequisites[j][0] == prerequisites[j][1])
                return 0;
            else if (prerequisites[i][0] == prerequisites[j][1] and prerequisites[i][1] == prerequisites[j][0])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<vector<int>> prerequisites = {{0, 1}};
    int numCourses = 2;
    cout << canFinish(numCourses, prerequisites) << endl;
    return 0;
}