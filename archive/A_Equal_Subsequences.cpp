#include<iostream>
#include<vector>
using namespace std;

int main(){
    int test;cin >> test;
    while(test--){
        int n, x;
        cin >> n >> x;
        if(n == x){
            for(int i = 0; i<n; i++){
                cout << 1;
            }
            cout << '\n';
        }
        else{
            vector<int>ans(n, 0);
            int low = 0, high = n-2;
            
            if(x > 1){
                cout << 1 << 0;
                x--;
            }

            
        }
    }
}