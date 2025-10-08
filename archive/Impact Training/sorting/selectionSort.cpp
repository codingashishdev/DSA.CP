#include<bits/stdc++.h>
using namespace std;

void Selection(vector<int> &v, int n){
    for(int i = 0; i<n; i++){
        int smallestElement = v[i];
        int index = i;
        // bool swapped = false;
        for(int j = i; j<n; j++){
            if(v[j] < smallestElement){
                smallestElement = v[j];
                index = j;
                // swapped = true;
            }
        }
        // cout << smallestElement << " " << index << '\n';
        // if(swapped = false){
        //     break;
        // }
        // else{
            swap(v[i], v[index]);
        // }

    }
}

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i<n; i++)cin >> v[i];
    Selection(v, n);
    for(auto i:v)cout << i << ' ';
}