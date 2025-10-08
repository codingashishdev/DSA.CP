#include <bits/stdc++.h>
using namespace std;
long long main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;

        map<long long, long long> m;

        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            m[x]++;
        }

        if (m.size() >= 3)
        {
            cout << "No" << endl;
        }
        else
        {
            if (abs(m.begin()->second - m.rbegin()->second) <= 1 == true)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}