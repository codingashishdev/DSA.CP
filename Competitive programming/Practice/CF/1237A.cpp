#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
  long long n;
  cin >> n;
  long long flag = 1;
  while (n--)
  {
    long long x;
    cin >> x;
    if (x % 2 == 0)
    {
      cout << (x / 2) << endl;
    }
    else
    {
      cout << (x + flag) / 2 << endl;
      flag = flag * -1;
    }
  }
}

long long main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long testcase = 1;
  // cin >> testcase;
  while (testcase--)
  {
    solve();
  }
}
