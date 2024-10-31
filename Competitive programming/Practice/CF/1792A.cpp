//*ash_code98*//
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
	ll n;
	cin >> n;

	ll arr[n];

	for (long long i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);

	ll ansCnt = 0;
	for (long long i = 0; i < n; i++)
	{
		if (arr[i] == 1 && arr[i + 1] == 1)
		{
			ansCnt++;
			i++;
		}
		else
		{
			ansCnt++;
		}
	}

	cout << ansCnt;
}

long long main()
{
	long long t = 1;
	cin >> t;
	while (t--)
	{
		solve();
		if (t)
			cout << endl;
	}
}
