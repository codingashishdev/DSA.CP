#include<iostream>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int one = 0, zero = 0;
        int v[n];
        for(int i = 0; i<n; i++){
            int x;
            cin >> x;
            v[i] = x;
            x == 1 ? one++ : zero++;
        }

        // cout << one << ' ' << zero <<'\n';
        if(one == n || zero == n){
            cout << "YES" << '\n';
        }
        else{
            bool conseq = false;
            for(int i = 0; i<n; i++){
                if(v[i] == v[i+1] && v[i] == 0 && v[i+1] == 0 && (i+1) < n){
                    conseq = true;
                }
            }

            conseq == true ? cout << "YES" << '\n' : cout << "NO" << '\n';
        }
    }   
}
