#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int x;
        cin >> x;
        // string s = to_string(x);
                if(floor((sqrt(x)/2) + ceil(sqrt(x)/2)) * (floor(sqrt(x)/2) + ceil(sqrt(x)/2)) == x){
                    cout << floor(sqrt(x)/2) << ' ' << ceil(sqrt(x)/2) << '\n';
                }
                else{
                    cout << -1 << '\n';
                } 
    }
}