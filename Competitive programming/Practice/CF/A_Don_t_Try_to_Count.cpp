#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    long long cnt = 0;
    for (long long i = 0; i < 10; i++)
    {
        if (s1.find(s2) != string::npos)
        {
            cout << cnt << endl;
            return;
        }
        s1 += s1;
        cnt++;
    }
    cout << "-1" << endl;
}

long long main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        solve();
    }
}