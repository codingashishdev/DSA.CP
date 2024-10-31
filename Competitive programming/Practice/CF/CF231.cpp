#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{

    long long n, k;
    cin >> n >> k;
    vector<pair<long long, long long>> mp(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> mp[i].first;
        mp[i].second = i;
    }
    sort(mp.begin(), mp.end());
    vector<long long> ans;

    for (long long i = 0; i < n; i++)
    {
        if (k < mp[i].first)
            break;
        k = k - mp[i].first;
        ans.push_back(mp[i].second + 1);
    }

    cout << ans.size() << endl;
    for (long long i : ans)
    {
        cout << i << " ";
    }
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