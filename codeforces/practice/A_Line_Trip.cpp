#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, x;
        cin >> n >> x;
        // int arr[n];
        map<int, string> m;
        for(int i = 0; i<n; i++){
            int x;
            cin >> x;
            m[x] = "ok";
        }

        int cnt = 0, ans = 0;
        for(int i = 1; i<=x; i++){
            cnt++;
            ans = max(ans, cnt);
            if(m[i] == "ok"){
                cnt = 0;
            }
        }

        for(int i = x-1; i>0; i--){
            cnt++;
            ans = max(ans, cnt);
            if(m[i] == "ok"){
                cnt = 0;
            }
        }
        cout << ans << endl;
    }
}