#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        if(n % 2 == 0){
            cout << -1 << '\n';
            break;
        }
        else{
            cout << n << " ";
            for(int i = 2; i<n-1; i++){
                cout << i << ' ';
            }
            cout << '\n';
        }
    }
}