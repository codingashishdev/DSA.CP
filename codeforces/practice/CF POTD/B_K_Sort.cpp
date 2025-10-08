#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }

        long long prefix_max = v[0];
        long long totalSum = 0, ops = 0;
        for(int i = 1; i<n; i++){
            prefix_max = max(prefix_max, v[i]);
            if(v[i] < prefix_max){
                totalSum += prefix_max - v[i];
                ops = max(ops, prefix_max - v[i]);
            }
        }
        cout << totalSum + ops << '\n';
    }
    return 0;
} 