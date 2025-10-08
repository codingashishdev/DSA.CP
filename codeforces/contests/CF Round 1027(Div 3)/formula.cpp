#include<bits/stdc++.h>
using namespace std;

// \(a^3+3(a^2)b+3(a)(b^2)+b^3)

int main(){
    long long a, b;
    cin >> a >> b;
    long long formula = (a*a*a) + (3*(a*a)*b) + (3*a*(b*b)) + (b*b*b);
    cout << formula << '\n';
}