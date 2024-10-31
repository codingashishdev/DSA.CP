#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    long long sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    long long ans = long long_MIN;
    for (long long i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            if (v[i] == 1)
            {
                ans = max(ans, sum - 4);
            }
            else
            {
                ans = max(ans, sum + 4);
            }
        }
        else
        {
            ans = max(ans, sum);
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
