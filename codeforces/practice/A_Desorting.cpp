#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        bool notSorted = false;
        int v[n], difference[n-1];
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }
        int mini = INT_MAX;
        for(int i = 0; i<n-1; i++){
            difference[i] = v[i+1] - v[i];
            mini = min(difference[i], mini);
            if(difference[i] < 0){
                notSorted = true;
            }
        }
        
        int ct = 0;
        while(mini >= 0){
            ct++;
            mini = mini-2;
        }
        cout <<ct << '\n';
    }

    return 0;
}