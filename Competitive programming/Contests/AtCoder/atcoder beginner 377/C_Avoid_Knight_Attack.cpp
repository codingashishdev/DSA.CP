#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    set<pair<int, int>> s;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a + 2 >= 0 && b + 1 >= 0 && a + 2 <= n && b + 1 <= n)
        {
            s.insert({a + 2, b + 1});
        }

        if (a + 1 >= 0 && b + 2 >= 0 && a + 1 <= n && b + 2 <= n)
        {
            s.insert({a + 1, b + 2});
        }

        if (a - 1 >= 0 && b + 2 >= 0 && a - 1 <= n && b + 2 <= n)
        {
            s.insert({a - 1, b + 2});
        }

        if (a - 2 >= 0 && b + 1 >= 0 && a - 2 <= n && b + 1 <= n)
        {
            s.insert({a - 2, b + 1});
        }

        if (a - 2 >= 0 && b - 1 >= 0 && a - 2 <= n && b - 1 <= n)
        {
            s.insert({a - 2, b - 1});
        }

        if (a - 1 >= 0 && b - 2 >= 0 && a - 1 <= n && b - 2 <= n)
        {
            s.insert({a - 1, b - 2});
        }

        if (a + 1 >= 0 && b - 2 >= 0 && a + 1 <= n && b - 2 <= n)
        {
            s.insert({a + 1, b - 2});
        }

        if (a + 2 >= 0 && b - 1 >= 0 && a + 2 <= n && b - 1 <= n)
        {
            s.insert({a + 2, b - 1});
        }
    }
    cout << n * n - s.size() - 1;
}