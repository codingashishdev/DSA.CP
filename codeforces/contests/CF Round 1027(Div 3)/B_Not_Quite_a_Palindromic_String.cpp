#include<bits/stdc++.h>
using namespace std;

int main(){
    int test; cin >> test;
    while(test--){
        int n, k; cin >> n >> k;
        int zeros = 0, ones = 0;
        for(int i = 0; i<n; i++){
            char c; cin >> c;
            if(c == '0') zeros++;
            else ones++;
        }
        int unpairs = (n/2)-k;
        zeros -= unpairs;
        ones -= unpairs;

        if(ones >= 0 && zeros >= 0 && zeros%2==0 && ones%2==0 || zeros < 0 && ones < 0){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}