#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    long long n;
    cin >> n;
    vector<long long> v(n + 1);
    long long twoCnt = 0;
    for (long long i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] == 2)
            twoCnt++;
    }

    long long twoTillDate = 0;
    for (long long i = 1; i <= n - 1; i++)
    {
        if (v[i] == 2)
            twoTillDate++;

        if (twoTillDate * 2 == twoCnt)
        {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
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