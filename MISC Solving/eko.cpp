#include<bits/stdc++.h>
using namespace std;

bool isPossible(int mid, vector<int> v, int m){
    int ate = 0;
    for(int i = 0; i<v.size(); i++){
        if(v[i] > mid)ate = ate + (v[i] - mid);
        if(ate >= m)return true;
    }
    return ate >= m;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    int ans = 0;
    int low = 0;
    int high = 0;
    for(int i = 0; i<n; i++){
        cin >> v[i];
        high = max(high, v[i]);
    }
    while(low <= high){
        int mid = (low + high)/2;
        if(isPossible(mid, v, m)){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout << ans;
}
