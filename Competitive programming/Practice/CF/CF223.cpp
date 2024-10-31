#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
	long long n;
	cin >> n;
	string s;
	cin >> s;
	long long ans = n;
	for (long long i = 0; i < n; i++)
	{
		if (s[i] == '1')
		{
			ans = max(ans, 2 * max(i + 1, n - i));
		}
	}
	cout << ans << endl;
}

long long main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
}