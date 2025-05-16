#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, m, p, q;
        cin >> n >> m >> p >> q;
        n % p == 0 && (((n/p) * q) != m) ? cout << "NO" : cout << "YES";
        cout << '\n'; 
    }
}