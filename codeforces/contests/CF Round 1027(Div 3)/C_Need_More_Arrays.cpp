#include<bits/stdc++.h>
using namespace std;

vector<int>v(10000);

int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }

        int diffArrays = 1;
        int cnt = 0;
        for(int i = 1; i<n; i++){
            if((v[i] - v[i-1]) >= 2){
                diffArrays++;
                cnt++;
            }
        }

        if(cnt == 0){
            if(n % 2 == 0){
                cout << n/2 << '\n';
            }
            else{
                cout << (n/2)+1 << '\n';
            }
        }
        else{
            cout << diffArrays << '\n';
        }
    }
}