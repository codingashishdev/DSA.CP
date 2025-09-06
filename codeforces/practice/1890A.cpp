#include <bits/stdc++.h>
using namespace std;

bool is_all_equal(vector<long long> v)
{
    return equal(v.begin() + 1, v.end(), v.begin());
}

long long main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 2)
    {
        cout << "Yes" << endl;
    }
    else if (n == 3)
    {
        if (a[0] == a[1] || a[1] == a[2] || a[0] == a[2])
        {
            cout << "Yes" << endl;
        }
    }
    else if (is_all_equal(a) == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}