/*
    author: codingashish_dev
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{  
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}