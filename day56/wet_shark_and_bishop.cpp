#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

//find remaining bishops after the elimination of bishops from the 1000*1000 board

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int x, y;

	cin >> n;

	map<int, int> add;
	map<int, int> subtract;

	ll cnt = 0;

	for (i = 1; i <= n; i++)
	{
		cin >> x >> y;
		
		cnt += add[x + y]; add[x + y]++;
		cnt += subtract[x - y]; subtract[x - y]++;
	}

	cout << cnt;

	return 0;
}
