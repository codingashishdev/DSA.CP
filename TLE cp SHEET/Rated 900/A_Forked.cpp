#include<iostream>
#include<set>
using namespace std;

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

int main(){
    int test;
    cin >> test;
    while(test--){
        int a, b;
        cin >> a >> b;
        int x_king, y_king;
        cin >> x_king >> y_king;
        int x_queen, y_queen;
        cin >> x_queen >> y_queen;

        set<pair<int, int>> k_hits, q_hits;

        for(int i = 0; i<4; i++){
            k_hits.insert({x_king + dx[i] * a, y_king + dy[i] * b});
            k_hits.insert({x_king + dx[i] * b, y_king + dy[i] * a});
        
            q_hits.insert({x_queen + dx[i] * a, y_queen + dy[i] * b});
            q_hits.insert({x_queen + dx[i] * b, y_queen + dy[i] * a});
        }
        int ans = 0;
        for(auto position: k_hits){
            if(q_hits.find(position) != q_hits.end()){
                ans++;
            }
        }
        cout << ans << '\n';
    }
}