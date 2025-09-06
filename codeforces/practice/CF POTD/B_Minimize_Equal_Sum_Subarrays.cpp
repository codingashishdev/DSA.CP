#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin >> n;
    vector<int> P(n), Q(n);
    for(int i = 0; i<n; i++){
        cin >> P[i];
    }
    for(int i = 0; i<n; i++){
        Q[i] = P[i];
    }

    rotate(Q.begin(), Q.begin() + 1, Q.end());
    // bool ok = true;
    int pairs = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            int pSum = 0, qSum = 0;
            int start = i, end = j;
            while(i <= j){
                pSum += P[i];
                qSum += Q[i];
                i++;
            }
            if(pSum == qSum){
                pairs++;
            }
        }
    }
    cout << "Pairs->"  << pairs << " ";
    cout << '\n';
    for(auto i:Q)cout << i << " ";
    cout << endl;
}

int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}