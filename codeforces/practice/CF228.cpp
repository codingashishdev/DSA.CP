#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    long long n;
    cin >> n;
    long long a1 = 0, a2 = 0, temp = 1;
    long long flag = 0;
    while (n > 0)
    {
        long long x = n % 10;
        if (x % 2 == 0)
        {
            a1 += (x / 2) * temp;
            a2 += (x / 2) * temp;
        }
        else
        {
            if (flag == 0)
            {
                a1 += (x + 1) / 2 * temp;
                a2 += (x / 2) * temp;
                flag = 1;
            }
            else
            {
                a1 += (x / 2) * temp;
                a2 += (x + 1) / 2 * temp;
                flag = 0;
            }
        }
        temp = temp * 10;
        n = n / 10;
    }

    cout << a1 << " " << a2 << endl;
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