#include<bits/stdc++.h>
using namespace std;

ll main(){
    ll test;
    cin >> test;
    while(test-- > 0){
        ll n;
        cin >> n;
        vector<vector<ll>>v(n, vector<ll>(n));
        for(ll i = 0; i<n; i++){
            for(ll j = 0; j<n; j++){
                cin >> v[i][j];
            }
        }

        long long ans = 0;
        for(ll i = 0; i<n; i++){
            for(ll j = 0; j<n; j++){
                if(v[i][j] < 0){
                    ans += abs(v[i][j]);
                    for(ll x=i+1, y=j+1; x<n && y<n; x++, y++){
                        v[x][y] = v[x][y] - v[i][j];
                    }
                }
            }
        }
        cout << ans << endl;
    }
}