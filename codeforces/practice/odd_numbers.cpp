#include<bits/stdc++.h>
using namespace std;

int main(){
    int cnt = 0;
    while(true){
        int x;
        cin >> x;
        if(x % 2 == 1) break;
        else cnt++;
    }

    cout << cnt << '\n';
}