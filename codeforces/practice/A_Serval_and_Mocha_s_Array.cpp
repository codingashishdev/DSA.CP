#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int array[n+1];
        for(int i = 0; i<n; i++){
            cin >> array[i];
        }
        bool flag = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(__gcd(array[i], array[j]) <= 2 && i != j){
                    flag = 1;
                }
            }
        }
        flag ? cout << "Yes" << endl : cout << "No" << endl;
    }
}