#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    string s;
    cin >> s;
    long long n = s.size();
    long long upper = 0, lower = 0;
    for (long long i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
    }
    // cout << lower << " " << upper;
    if (s[0] >= 'a' && s[0] <= 'z' && lower == 1)
    {
        s[0] = toupper(s[0]);
        for (long long i = 1; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else if (upper == n && lower == 0)
    {
        for (long long i = 0; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
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
