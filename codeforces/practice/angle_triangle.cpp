#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int LHS = a;
    ((b > a) && (b > c)) ? LHS = b : LHS = c;
    int RHS = sqrt(((a*a) + (b*b) + (c*c))/2);

    LHS == RHS ? cout << "Equal" : cout << "Not equal";
}