#include<bits/stdc++.h>
using namespace std;

int main(){
    long long test;
    cin >> test;
    while(test--){
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v(n);
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }

        long long ans = b;
        for(int i = 0; i<n; i++){
            ans = ans + min(v[i], a-1);
        }
        cout << ans << '\n';
    }
}