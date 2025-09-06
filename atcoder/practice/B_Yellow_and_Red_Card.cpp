/*
    author: codingashish_dev
*/
#include <bits/stdc++.h>
using namespace std;

int main(){  
    int N, Q;
    cin >> N >> Q;
    vector<int> Red(N+1), Yellow(N+1);
    for(int i = 0; i<Q; i++){
        int command, x;
        cin >> command >> x;

        if(command == 1){
            Yellow[x]++;
            if(Yellow[x] == 2){
                Red[x] = 1;
            }
        }
        else if(command == 2){
            Red[x] = 1;
        }
        else{
            Red[x] == 1 ? cout << "Yes" << '\n' : cout << "No" << '\n';
        }
    }
}