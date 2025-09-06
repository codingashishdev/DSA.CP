#include <bits/stdc++.h>
using namespace std;


int main(){
    long long test;
    cin >> test;
    while(test--){
        long long n, k;
        cin >> n >> k;
        if(k == 1 || 2+k == n || n == k || n % 2 == 0 || (n - k) % 2 == 0){
            cout << "YES" << '\n';   
        } 
        else{
            cout << "NO" << '\n';
        }
    }
}