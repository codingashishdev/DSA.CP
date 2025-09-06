#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        vector<int>v(n+n), b, c;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i = 0; i<n; i++){
            cin >> v[i];
            maxi = max(maxi, v[i]);
            mini = min(mini, v[i]);
        }
        if(maxi == mini){
            cout << "No" << '\n';
        }
        else{
            cout << "Yes" << '\n';
            for(int i = 0; i<n; i++){
                if(v[i] == maxi){
                    cout << 2 << " ";
                }
                else{
                    cout << 1 << " ";
                }
            }
            cout << '\n';
        }
    }   
}
