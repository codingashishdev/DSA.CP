#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n; cin >> n;
        vector<int>ans;
        int prev; cin >> prev;
        ans.push_back(prev);
        for(int i = 1; i<n; i++){
            int x; cin >> x;
            if(x < prev){
                (x-1) > 0 ? ans.push_back(x-1) : ans.push_back(x);       
            }
            ans.push_back(x);
            prev = x;
        }
        cout << ans.size() << '\n';
        for(auto i:ans)cout << i << " ";
        cout << '\n';
    }
}