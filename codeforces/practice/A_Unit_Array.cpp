#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        int ones = 0, minus = 0, ans = 0;
        for(int i = 0; i<n; i++){
            int x;
            cin >> x;
            x == 1 ? ones++ : minus++;
        }
        while(!(ones-minus >= 0 && minus % 2 == 0)){
            minus--;
            ones++;
            ans++;
        }
        cout << ans << '\n';
    }
}