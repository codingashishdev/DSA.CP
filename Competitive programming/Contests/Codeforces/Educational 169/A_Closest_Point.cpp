#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    if (n > 2)
    {
        cout << "NO" << endl;
        return;
    }
    else if (n == 2)
    {
        long long a, b;
        cin >> a >> b;
        if (abs(a - b) > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

long long main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
