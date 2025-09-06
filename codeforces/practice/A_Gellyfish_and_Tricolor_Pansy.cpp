#include<iostream>
using namespace std;
#define ll long long
int main(){
    ll test;
    cin >> test;
    while(test--){
        // int n;
        // cin >> n;
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        // if k % 2 == 0, c can attack b. Gellyfish wins.
        // or c can attack d and reduce it by 1. d dies
        // if k % 2 == 1, d can attack a. flower wins 
        // or d can attack c and reduce it by 1. c dies.  
    
        // cout << a + c << " ";
        // cout << b + d << '\n';
        
        if(a > d){
            cout << "Gellyfish" << '\n';
        }
        else{
            cout << "Flower" << '\n';
        }
    }
}