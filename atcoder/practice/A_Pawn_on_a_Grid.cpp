/*
    author: codingashish_dev
*/
#include <bits/stdc++.h>
using namespace std;

int main(){  
    int N, M;
    cin >> N >> M;
    int ans = 0;
    char c[N][M];
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            cin >> c[i][j];
            if(c[i][j] == '#')ans++;
        }
    }
    cout << ans;
}