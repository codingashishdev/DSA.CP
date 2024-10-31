#include <bits/stdc++.h>
using namespace std;

void naive_gcd()
{
    long long a, b;
    cin >> a >> b;
    long long size = max(a, b);
    long long ans = 1;
    for (long long i = 1; i <= size; i++)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            ans = max(ans, i);
        }
    }

    cout << ans;
}

void gcd(long long a, long long b)
{
    if (a == 0)
    {
        cout << b;
        return;
    }
    else
    {
        return gcd(b % a, a);
    }
}

long long main()
{
    long long a, b;
    cin >> a >> b;
    if (a > b)
    {
        swap(a, b);
    }
    gcd(a, b);
}