#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(b > d || c-a>d-b){
            cout << -1 << '\n';
        }
        else{
            int ans = d-b;
            int another = d-b + (a-c);
            cout << 2*(d-b) + (a-c) << '\n';
        }
    }
}