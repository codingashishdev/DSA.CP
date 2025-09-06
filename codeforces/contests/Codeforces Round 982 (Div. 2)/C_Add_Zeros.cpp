#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n * n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        while (n--)
        {
            for (int i = 0; i < v.size(); i++)
            {
                int size = v.size();
                if (i > 1 && i <= abs(size) && (v[i] == (abs(size) + 1 - i)))
                {
                    for (int j = 0; j < i - 1; j++)
                    {
                        v.push_back(0);
                    }
                }
            }
        }

        // for (auto i : v)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
    }
}