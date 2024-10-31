#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        int n = min(x, y);

        cout << 0 << " " << 0 << " " << n << " " << n << endl;
        cout << n << " " << 0 << " " << 0 << " " << n;
        cout << endl;
    }
}