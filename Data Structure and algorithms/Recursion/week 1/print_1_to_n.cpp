#include <iostream>
using namespace std;

void print(int number)
{
    if (number == 1)
    {
        cout << number << '\n';
        return;
    }
    print(number - 1);
    cout << number << '\n';
}

int main()
{
    int number = 5;
    // cin >> number;
    print(number);
    return 0;
}