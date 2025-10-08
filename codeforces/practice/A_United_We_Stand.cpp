#include <bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        vector<int>v(n), b, c;
        map<int, int>m;
        int mini = INT_MAX;
        for(int i = 0; i<n; i++){
            cin >> v[i];
            mini = min(mini, v[i]);
            m[v[i]]++;
        }
        int flag = 0;
        for(auto i:m){
            if(i.second == n) flag = 1;
        }
        if(flag == 1) cout << -1 << '\n';
        else{
            for(int i = 0; i<n; i++){
                v[i] == mini ? b.push_back(v[i]) : c.push_back(v[i]);
            }
            cout << b.size() << " " << c.size() << '\n';
            for(auto i:b)cout << i << " ";
            cout << '\n';
            for(auto i:c)cout << i << " ";
            cout << '\n';
        }

    }
}