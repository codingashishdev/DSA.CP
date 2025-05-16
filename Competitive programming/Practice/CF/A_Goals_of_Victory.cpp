#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int sum = 0;
        for(int i = 0; i<n-1; i++){
            int x;
            cin >> x;
            sum += x;
        }
        // cout << (n-1)/2 << " ";
        cout << -sum << endl;
        // cout << abs(sum) << endl;
    }
}