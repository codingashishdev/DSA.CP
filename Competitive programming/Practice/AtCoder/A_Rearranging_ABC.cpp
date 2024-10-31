#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    if(s == "ABC" || s == "BAC" || s == "ACB" || s == "BCA" || s == "CAB" || s == "CBA"){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}