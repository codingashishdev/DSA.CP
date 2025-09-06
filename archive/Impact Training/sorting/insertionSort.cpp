#include<bits/stdc++.h>
using namespace std;

void insertion(vector<int> &v, int n){
    for(int i = 1; i < n; i++){
        int key = v[i];
        int j = i - 1;
        while(j >= 0 && v[j] > key){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i<n; i++)cin >> v[i];
    insertion(v, n);
    for(auto i:v)cout << i << ' ';
}