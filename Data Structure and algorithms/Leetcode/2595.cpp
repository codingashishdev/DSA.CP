#include<iostream>
using namespace std;

int main(){
    int decimal = 50;
    int temp = decimal;
    string binary = "";
    while(temp >= 0){
        binary += temp%2;
        temp = temp / 2;
    }

    cout << binary;
}