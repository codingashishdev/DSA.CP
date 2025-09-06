#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;


void solve(){
    int n, c;cin >> n >> c;
    int mini = INT_MAX;
    map<int, int> mp;
    for(int i = 0; i<n; i++){
        int x;cin >> x;
        mini = min(mini, x);
        mp[x]++;
    }
    int y = c;
    while(true){
        if(y <= mini){
            y++;
            continue;
        }
        if(mp.find(y) != mp.end()){
            y++;
        }
        else{
            break;
        }
    }

    cout << y - c << '\n';
}

int main(){
    int test;cin >> test;
    while(test--)solve();
}