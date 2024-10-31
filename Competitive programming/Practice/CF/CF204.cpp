//*ash_code98*//
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    long long n;
    cin >> n;

    vector<long long> evenCnt, oddCnt;

    for (long long i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        if (x % 2 == 0)
        {
            evenCnt.push_back(i);
        }
        else
        {
            oddCnt.push_back(i);
        }
    }

    if (oddCnt.size() >= 3)
    {
        cout << "YES" << endl;
        cout << oddCnt[0] << " " << oddCnt[1] << " " << oddCnt[2] << endl;
    }
    else if (oddCnt.size() >= 1 && evenCnt.size() >= 2)
    {
        cout << "YES" << endl;
        cout << oddCnt[0] << " " << evenCnt[0] << " " << evenCnt[1] << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

long long main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
        // if(t)cout << endl;
    }
}