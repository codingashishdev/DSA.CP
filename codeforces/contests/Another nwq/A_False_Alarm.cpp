#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, x;
        cin >> n >> x;
        vector<int>v(n);
        int ones = 0;
        for(int i = 0; i<n; i++){
            cin >> v[i];
            if(v[i]==1)ones++;
        }

        if(n == x && ones <= x || n == 1 && x >= 1){
            cout << "YES" << '\n';
        }
        else{
            int inde = 0;
            int flag = 0;
            while(x > 0 && inde < n){
                if(v[inde] == 1){
                    flag = 1;
                }

                if(flag == 1){
                    x--;
                    v[inde] = 0;
                }
                inde++;
            }
            bool ok = true;
            for(auto i:v){
                if(i == 1){
                    ok = false;
                    break;
                }
            }
            if(ok == true){
                cout << "YES" << '\n';
            }
            else{
                cout << "NO" << '\n';
            }
        }
    }
}