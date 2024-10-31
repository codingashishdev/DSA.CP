#include <iostream>
using namespace std;

long long main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long num1 = max(c, a);
    long long num2 = min(b, d);

    if (num1 > num2)
    {
        cout << "-1";
    }
    else
    {
        cout << num1 << ' ' << num2;
    }
}