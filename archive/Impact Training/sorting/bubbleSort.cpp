#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v, int n){
    for(int i = 0; i<n-1; i++){
        bool swapped = false;
        // int count = 0;
        for(int j = 1; j<n-i; j++){
            if(v[j-1] > v[j]){
                swap(v[j-1], v[j]);
                swapped = true;
            }
        }

        if(swapped == false)break;
        cout << '\n';
    }
    cout << '\n';
}

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i<n; i++)cin >> v[i];
    bubbleSort(v, n);
    // for(auto i:v)cout << i << ' ';
}