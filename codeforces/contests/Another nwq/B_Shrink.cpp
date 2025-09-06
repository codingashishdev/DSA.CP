#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        vector<long long>v(n);
        for(int i = 0; i<n; i++){
            v[i] = i+1;
        }

        swap(v[2], v[n-1]);
        swap(v[n-1], v[1]);

        for(auto i:v)cout << i << " ";
        cout << '\n';
    }
}