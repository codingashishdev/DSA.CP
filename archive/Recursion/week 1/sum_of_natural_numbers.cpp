#include <iostream>
using namespace std;

int sum(int number)
{
    if (number <= 1)
    {
        return 1;
    }
    return number + sum(number - 1);
}

int main()
{
    int number = 5;
    // cin >> number;
    cout << sum(number);
}