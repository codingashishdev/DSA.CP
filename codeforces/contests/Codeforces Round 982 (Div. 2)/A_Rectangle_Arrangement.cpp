#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long test;
    cin >> test;
    while (test-- > 0)
    {
        long long n;
        cin >> n;
        vector<long long> a, b;
        long long width = 0, height = 0;
        for (long long i = 0; i < n; i++)
        {
            long long x, y;
            cin >> x >> y;
            a.push_back(x);
            b.push_back(y);
            width = max(width, x);
            height = max(height, y);
        }

        cout << 2 * (width + height) << endl;
    }
}