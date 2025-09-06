/*
    author: codingashish_dev
*/
#include <bits/stdc++.h>
using namespace std;

int main(){  
    int N, M;
    cin >> N >> M;
    vector<string>a(N+1), b(M+1);
    for(int i = 0; i<N; i++){
        cin >> a[i];
    }

    for(int i = 0; i<M; i++){
        cin >> b[i];
    }
    
    int ans = 0;
    for(int i = 0; i<N; i++){
        string lastDigits = a[i].substr(3);
        bool match = false;
        for(int j = 0; j<M; j++){
            if(b[j] == lastDigits){
                match = true;
            }
        }

        if(match == true){
            ans++;
        }
    }
    cout << ans;
}