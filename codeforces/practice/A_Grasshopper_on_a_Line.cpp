#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int x, k;
        cin >> x >> k;
        if(x % k != 0){
            cout << 1 << '\n';
            cout << x << '\n';
        }
        else{
            cout << 2 << '\n';
            cout << x - k + 1 << ' ' << x - (x-k+1) << '\n';
        }
    }
}