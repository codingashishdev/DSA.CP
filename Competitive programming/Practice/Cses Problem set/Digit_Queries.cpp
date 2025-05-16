#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int x;
        cin >> x;
        if(x > 9){
            int digit = x - 9;
            if(digit % 2 == 0){
                digit = digit/2;
            }
            else{
                digit = (digit/2) + 1;
            }
            int final = digit + 9;
            string s = to_string(final);
            cout << s[s.size()-1];
        }
        else{
            cout << x << endl;
        }
    }
}
