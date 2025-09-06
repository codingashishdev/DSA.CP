#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    long long h1, m1, h2, m2;
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);

    long long time1 = h1 * 60 + m1;
    long long time2 = h2 * 60 + m2;
    long long midTime = (time1 + time2) / 2;

    prlong longf("%02d:%02d", midTime / 60, midTime % 60);
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