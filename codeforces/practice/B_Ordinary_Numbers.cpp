#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        int ans = 0;
        for(int d = 1; d<=9; d++){
            for(int x = 1; x<=9; x++){
                // cout << string(d, x + '0') << '\n';
                // cout << string(d, '0' + x) << '\n';
                ans += stoi(string(d, '0' + x)) <= n;
            }
        }
        cout << ans << '\n';
    }
}