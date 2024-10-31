#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int num1, num2;
        cin >> num1 >> num2;
        p.push_back({num1, num2});
    }
    ll ans = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            ll left = i;
            ll right = j;
            for (auto w : p)
            {
                if (w.first < left && w.second > right)
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
        }
    }
    cout << ans;
}