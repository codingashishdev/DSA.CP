#include <bits/stdc++.h>
using namespace std;


int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        int cnt = 0, maxi = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] == 0){
                cnt++;
            }
            else{
                cnt = 0;
            }
            maxi = max(maxi, cnt);
        }
        if(n==1 && arr[0] == 0){
            cout << 1 << '\n';
        }
        else{
            cout << maxi << '\n';
        }
    }
}