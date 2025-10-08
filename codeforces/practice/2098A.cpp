#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;cin >> s;
    int size = s.size()-1;
    int hash[size+1] = {0};
    for(char c:s)hash[c]++;

    string answer = "";
    //10-1=9, 8, 7, 6, 5, 4, 3, 2, 1, 0 
    for(int i = 1; i<=10; i++){
        for(int j = 10-i; j>=9; j++){
            cout << i << " " << j << '\n';
        }
    }
}

int main(){
    int test;cin >> test;
    while(test--){
        solve();
        // string s;cin >> s;
        // int lastIndex = 0;

        // int low = 0, high = s.size()-1;
        // while(low <= high){
        //     cout << (int)(s[low] - '0') << '\n';/
        //     // cout << 10 - low - 1<< '\n';
        //     // cout << char('10' - low - '1') << '\n';
        //     if(((int)(s[low] - '0')) == (10-low-1)){
        //         // cout << s[low] << " " << (10-low-1) << '\n';
        //         continue;
        //     }
        //     else{
        //         int findLess = low;
        //         for(int i = findLess; i<s.size(); i++){
        //             if((int)(s[low] - '0') == (10-low)){
        //                 swap(s[i], s[low]);
        //                 break;
        //             }
        //         }
            // }
            // low++;
        // }
        // cout << s << '\n';
    }
}