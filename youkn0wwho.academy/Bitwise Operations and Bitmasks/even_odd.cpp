#include<iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    (number & 1 == 1) ? cout << "Odd" : cout << "Even"; 
}