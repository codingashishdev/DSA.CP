/*
    author: codingashish_dev
*/
#include <bits/stdc++.h>
using namespace std;

int main(){  
    int Test;
    cin >> Test;
    while(Test--){
        int N;
        cin >> N;
        
        if(N > 0 && N < 10){
            cout << N << '\n';
        }
        else{
            int ans = 0, cnt = 0;
            for(int i = 1; i<=N; i++){
                string s = to_string(i);
                for(int j = 0; j<s.size(); j++){
                    if(s[j] == s[j+1]){
                        cnt++;
                    }
                }
                cout << cnt << '\n';
                // if(cnt+1 == s.size()){
                //     cout << s << '\n';
                // }
            }
            // cout << ans << '\n';
        }
    }
}