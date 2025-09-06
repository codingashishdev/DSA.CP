#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    long long n;
    cin >> n;
    vector<ll> v(n);
    for (long long i = 0; i < n; i++)
        cin >> v[i];

    reverse(v.begin(), v.end());
    for (long long i = 0; i < n; i++)
    {
        if (v[i] <= v[i + 1])
        {
            v[i + 1] = v[i + 1] - (v[i + 1] - v[i]) - 1;
            if (v[i + 1] < 0)
            {
                v[i + 1] += 1;
            }
        }
    }
    long long totalSum = 0;
    for (long long i = 0; i < n; i++)
        totalSum += v[i];
    cout << totalSum;
}

long long main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
