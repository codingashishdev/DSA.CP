#include <bits/stdc++.h>
using namespace std;

long long main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long ans = 0;
        long long a[2], b[2];
        cin >> a[0] >> a[1] >> b[0] >> b[1];
        for (long long i = 0; i < 2; i++)
        {
            for (long long j = 0; j < 2; j++)
            {
                long long SuneetWon = 0, SlavicWon = 0;
                if (a[i] > b[j])
                {
                    SuneetWon++;
                }
                if (a[i] < b[j])
                {
                    SlavicWon++;
                }
                if (a[!i] > b[!j])
                {
                    SuneetWon++;
                }
                if (a[!i] < b[!j])
                {
                    SlavicWon++;
                }
                if (SuneetWon > SlavicWon)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}