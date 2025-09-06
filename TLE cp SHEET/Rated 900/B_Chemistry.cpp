#include<iostream>
#include<set>
#include<map>
using namespace std;

bool isPalindrome(string s){
    int low = 0, high = s.size()-1;
    while(low++ <= high--){
        if(s[low] != s[high]){
            return false;
        }
    }
    return true;
}

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<int, int> mp;
        for(char c:s){
            mp[c]++;
        }
        int odds = 0;
        for(auto i:mp){
            if(i.second % 2 == 1)odds++;
        }
        
            if(odds > k+1)cout << "NO" << '\n';
            else cout << "YES" << '\n';
    }
}