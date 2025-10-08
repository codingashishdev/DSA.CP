#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int test;
    cin >> test;
    while(test--){
        ll n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        // 1 1 3 4 5 9

        //we are basically storing the maxi of two choosen number
        ll ans = 0;
        for(int i = n-1; i>=0; i = i-2){
            ans += v[i];
        }

        cout << ans << '\n';
    }
}