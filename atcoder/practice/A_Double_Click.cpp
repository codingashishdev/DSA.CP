/*
    author: codingashish_dev   
*/
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N, D;
    cin >> N >> D;
    vector<int>v(N+1);
    for(int i = 0; i<N; i++)cin >> v[i];
    for(int i = 1; i<N; i++){
        if(v[i] - v[i-1] <= D){
            cout << v[i];
            return;
        }
    }
    cout << -1;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;

    for(int test = 1; test <= t; ++test)solve();
    return 0;
}