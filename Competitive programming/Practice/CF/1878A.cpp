#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int flag = false;
        for(int i = 0; i<n; i++){
            int x;
            cin >> x;
            if(x == k){
                flag = true;
            }
        }
        if(flag == true){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
