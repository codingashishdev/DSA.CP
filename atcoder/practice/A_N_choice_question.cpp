#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int choice = a + b;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        if(x == choice){
            cout << i+1;
        }
    }
}