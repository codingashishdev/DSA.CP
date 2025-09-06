#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;cin >> test;
    while(test--){
        int N;cin >> N;
        int maxi = INT_MIN, mini = INT_MAX;
        vector<int>v(N);
        for(int i = 0; i<N; i++){
            cin >> v[i];
            mini = min(mini, v[i]);
            maxi = max(maxi, v[i]);
        }

        // int low = 0, high = N-1;
        // int cnt = 0;
        sort(v.begin(), v.end());

        if(v[0] % 2 == v[N-1] % 2){
            cout << 0 << '\n';
            break;
        }

        // while(low <= high){
        //     int sum = v[high] + v[low];
        //     if(sum % 2 != 0 && v[low] % 2 != 0){
        //         low++;
        //         cnt++;
        //     } 
        //     else if(sum % 2 != 0 && v[high] % 2 != 0){
        //         low++;
        //         cnt++;
        //     }
        //     else if(sum % 2 == 0){
        //         break;
        //     }
        // }
        
        // if((mini + maxi) % 2 == 0){
        //     cout << 0 << '\n';
        // }
        // else{
        //     // cout << mini << " " << maxi << '\n';
        //     if(N == 3){
        //         if((v[0] + v[N-1]) % 2 != 0 && v[1] % 2 != 0){
        //             cout << 1 << '\n';
        //         }
        //     }
        //     else{
        //         cout << cnt << '\n';
        //     }
        // }
    }
}