#include<bits/stdc++.h>
using namespace std;

bool canReachInTime(const vector<int> &dist, const double hour, int speed)
{
    double time = 0;
    for (int i = 0; i < dist.size() - 1; ++i)
        time += ((dist[i] + speed - 1) / speed);

    time += ((double)dist.back()) / speed;
    return time <= hour;
}


int minSpeedOnTime(vector<int> &dist, double hour)
{
    int N = dist.size();
    if (hour <= (double)(N - 1))
        return -1;

    int lo = 1, hi = 1e7, mi;
    while (lo < hi)
    {
        mi = (lo + hi) / 2;
        if (canReachInTime(dist, hour, mi))
            hi = mi;
        else
            lo = mi + 1;
    }

    return hi;
}

int main(){
    vector<int> dist={1,3,2};
    double hour= 2.7;
    cout<<minSpeedOnTime(dist, hour);
    return 0;
}