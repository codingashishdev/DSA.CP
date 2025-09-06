#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char, long long>m;
        for(char c:s)m[c]=1;
        // for(auto i:m)newS.push_back(i.first);
        long long ans = (s.size()-m.size());
        long long cal = (m.size()-ans)/2;
        if(s.size() == 1){
            cout << 0 << '\n';
        }
        else if(m.size() == 1){
            cout << 1 << '\n';
        }
        else{
            cout << cal+ans << '\n';
        }
    }
};