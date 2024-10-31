#include <iostream>
using namespace std;

long long main()
{
    bool flag = true;
    while (flag != false)
    {
        long long x;
        cin >> x;
        if (x == 1999)
        {
            cout << "Correct";
            flag = false;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
}