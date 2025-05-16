#include<iostream>
#include<climits>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int maxi = INT_MIN, mini = INT_MAX;
        for(int i = 0; i<n; i++){
            int x;
            cin >> x;
            if(x > maxi){
                maxi = x;
            }

            if(x < mini){
                mini = x;
            }
        }

        cout << maxi - mini << endl;
    }
}