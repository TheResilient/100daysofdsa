//There are n heroes fighting in the arena. Initially, the i-th hero has ai health points.

// The fight in the arena takes place in several rounds. At the beginning of each round, each alive hero deals 1 damage to all other heroes. Hits of all heroes occur simultaneously. Heroes whose health is less than 1 at the end of the round are considered killed.

// If exactly 1 hero remains alive after a certain round, then he is declared the winner. Otherwise, there is no winner.

// Your task is to calculate the number of ways to choose the initial health points for each hero ai, where 1≤ai≤x, so that there is no winner of the fight. The number of ways can be very large, so print it modulo 998244353. Two ways are considered different if at least one hero has a different amount of health. For example, [1,2,1] and [2,1,1] are different.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < n; j++)
            if (j != i && a[j] > a[i])
                break;
        if (j == n)
            ans++;
    }
    cout << ans << endl;
    return 0;
}