#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = n - 1;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] > v[i])
                {
                    count++;
                }
            }
            // cout << count + i << ' ';
            ans = min(ans, count + i);
        }
        cout << ans << " ";
    }
}