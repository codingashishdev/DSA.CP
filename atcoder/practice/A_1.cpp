/*
    author: codingashish_dev
*/
#include <bits/stdc++.h>
using namespace std;

int main(){  
    int N, M;
    cin >> N >> M;
    
    for(int i = 0; i<N; i++){
        int x;cin >> x;
        if(x == M){
            cout << i+1;
            return 0;
        }
    }
}