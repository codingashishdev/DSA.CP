#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, pos;
        cin >> n >> pos;
        vector<int>v(n);
        int index = 0;
        bool found = false;
        for(int i = 0; i<n; i++)cin >> v[i];
        for(int i = 1; i<n; i++){
            if(v[i-1] == pos){
                found = true;
                index = i-1;
            }
            else if(v[i] > pos && v[i-1] < pos){
                index = i;
            }
        }

        if(found == true && index != n){
            sort(v.begin(), v.begin()+index+1, greater<>());
        }
        else{
            sort(v.begin()+index, v.end(), greater<>());
        }
        int ans = 0;
        // if(found == true){
            for(int i = 0; i<v.size()-1; i++){
                ans += abs(v[i] - v[i+1]);
            }
        // }

        if(found == false){
            ans += abs(v[v.size()-1] - pos);
        }
        
        cout << ans;

        cout << '\n';
    }
}