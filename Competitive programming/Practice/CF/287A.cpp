//*ash_code98*//
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{

    char ch[4][4];

    for (long long i = 0; i < 4; i++)
    {
        for (long long j = 0; j < 4; j++)
        {
            cin >> ch[i][j];
        }
    }

    for (long long i = 0; i < 3; i++)
    {
        for (long long j = 0; j < 3; j++)
        {
            long long ansCnt = (ch[i][j] == '#') + (ch[i + 1][j] == '#') + (ch[i][j + 1] == '#') + (ch[i + 1][j + 1] == '#');
            if (ansCnt != 2)
            {
                cout << "YES";
                return;
            }
        }
    }

    cout << "NO";
    return;
}

long long main()
{
    long long t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
