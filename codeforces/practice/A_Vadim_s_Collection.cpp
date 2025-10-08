#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int hash[12] = {0};

    for(auto i:s){
        hash[i - '0']++;
    }

    string answer;
    for(int i = 1; i<=10; i++){
        for(int j = 10-i; j<=9; j++){
            if(hash[j]){
                hash[j]--;
                answer.push_back(j + '0');
                break;
            }
        }
    }
    cout << answer;
}

int main(){
    int test;cin >> test;
    while(test--){
        solve();
        cout << '\n';
    }
}