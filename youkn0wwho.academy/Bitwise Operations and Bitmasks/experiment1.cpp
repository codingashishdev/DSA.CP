#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 4;
    cout << bitset<8>(x) << '\n';
    cout << bitset<16>(x) << '\n';
    cout << bitset<32>(x) << '\n';  
    for(int i = 0; i < 30; i++) if((x & (1 << i)) != 0) cout << i << " ";
    cout << __builtin_popcount(x);
}
