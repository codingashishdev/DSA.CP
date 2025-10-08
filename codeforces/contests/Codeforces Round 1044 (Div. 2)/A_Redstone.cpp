#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        // vector<int> v;
        map<int, int> mp;
        for(int i = 0; i<n; i++){
            int x;cin >> x;
            mp[x]++;
        }
        bool ok = false;
        for(auto i:mp){
            if(i.second >= 2)ok = true;
            if(ok == true)break;
        }
        if(ok == true)cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}