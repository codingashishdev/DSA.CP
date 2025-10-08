#include <bits/stdc++.h>
using namespace std;

long long main()
{
    string s, original;
    cin >> s;
    original = s;
    reverse(s.begin(), s.end());
    if (s == original)
    {
        cout << s << endl;
        cout << "YES";
    }
    else
    {
        bool flag = false;
        string ans = "";
        for (long long i = 0; i < s.size(); i++)
        {
            if (s[i] != '0' && flag == false)
            {
                flag = true;
            }

            if (flag == true)
            {
                ans += s[i];
            }
        }
        cout << ans << endl;
        cout << "NO";
    }
}