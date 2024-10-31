#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    ll n;
    vector<long long> v(3);
    for (long long i = 0; i < 3; i++)
        cin >> v[i];

    cin >> n;
    sort(v.begin(), v.end());

    ll x = abs(v[2] - v[0]);
    ll y = abs(v[2] - v[1]);
    ll z = abs(v[2] - v[2]);

    ll ans = n - (x + y + z);

    if (ans % 3 == 0 && ans >= 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

long long main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }
}