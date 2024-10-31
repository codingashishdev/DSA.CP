#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long k, n;
	cin >> k >> n;

	vector<long long> v(n);

	v[0] = 1;

	for (long long i = 1; i < k; i++)
	{
		v[i] = min(v[i - 1] + i, n - (k - 1 - i));
	}

	for (long long i = 0; i < k; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

long long main()
{
	long long t;
	cin >> t;
	while (t--)
		solve();
}