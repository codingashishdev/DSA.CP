#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, L, R;
    cin >> n >> L >> R;
    L--;
    R--;
    string s;
    cin >> s;
    bool ok = true;
    while(L <= R){
        // cout << s[L] << " ";
        if(s[L] != 'o'){
            ok = false;
        }
        L++;
    }
    if(ok == true)cout << "Yes" << '\n';
    else cout << "No" << '\n';
}