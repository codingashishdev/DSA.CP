#include<bits/stdc++.h>
using namespace std;

// #define int long long 

int main(){
    int test;
    cin >> test;
    while(test--){
        int n; cin >> n;
        vector<int>v(n);
        for(int i = 0; i<n; i++){ 
            cin >> v[i];
        }

        for(int i = 1; i<n-1; i++){
            if(v[i] >= 2*v[i-1] && v[i+1] >= v[i-1]){
                v[i] = v[i] - 2*v[i-1];
                v[i+1] = v[i+1] - v[i-1];
                v[i-1] = 0;
            }
        }

        
        int cnt = 0;
        for(auto i:v){
            if(i == 0)cnt++;
        }

        cnt == n ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }
    
    return 0;
}
