#include <bits/stdc++.h>
using namespace std;

char c[8][8];

int main()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> c[i][j];
        }
    }

    set<int> s1, s2;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (c[i][j] == '#')
            {
                s1.insert(i);
                s2.insert(j);
            }
        }
        // cout << '\n';
    }

    cout << (8 - s1.size()) * (8 - s2.size());

    // cout << p.size();
    // if (p.size() == 0)
    // {
    //     cout << 64;
    // }
    // else
    // {
    //     cout << (8 - p.size()) * 2;
    // }
}