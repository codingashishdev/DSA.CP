#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;cin >> n >> x;
    vector<int> v(n);
    for(int i = 0; i<n; i++)cin >> v[i];
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int ans = 0;
    for(int i = 0, cnt=1; i<n; i++, cnt++){
        if(v[i] * cnt >= x){
            ans++;
            cnt = 0;
        }
        // cout << cnt << " ";
        // cout << endl;
    }
    cout << ans << '\n';
}

int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}