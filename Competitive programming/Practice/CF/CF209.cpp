#include <iostream>
using namespace std;

#define endl '\n'

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    long long row = 0;
    for (long long i = 0; i <= n; i++)
    {
        for (long long j = n - i; j > 0; j--)
        {
            cout << "  ";
        }

        for (long long j = 0; j <= i; j++)
        {
            cout << j << " ";
        }

        for (long long j = 1; j <= i; j++)
        {
            cout << abs(j - i) << " ";
        }
        cout << endl;
    }

    for (long long i = n - 1; i >= 0; i--)
    {
        for (long long j = n - i; j > 0; j--)
        {
            cout << "  ";
        }

        for (long long j = 0; j <= i; j++)
        {
            cout << j << " ";
        }

        for (long long j = 1; j <= i; j++)
        {
            cout << abs(j - i) << " ";
        }
        cout << endl;
    }
}

long long main()
{
    long long t = 1;
    while (t--)
    {
        solve();
    }
}