/*ash_code98*/
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
    vector<long long> pre(n, 0), suff(n, 0);
    set<char> set;

    for (long long i = 0; i < n; i++)
    {
        set.insert(s[i]);    // from left to right
        pre[i] = set.size(); // store the increasing size of set
    }
    set.clear(); // to reset set

    for (long long i = n - 1; i >= 0; i--)
    {
        set.insert(s[i]);     // from right to left
        suff[i] = set.size(); // probably prefix and suffix have same elements
    }
    long long ans = 0;
    for (long long i = 0; i < n - 1; i++)
    {                                         // iterate from i to n-2 because suffix can't go beyond n-1
        ans = max(ans, pre[i] + suff[i + 1]); // max of (prefix first + suff second) and modified ans
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
