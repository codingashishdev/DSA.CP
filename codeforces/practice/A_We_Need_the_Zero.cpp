#include<iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int total = arr[0];
        for(int i = 1; i<n; i++){
            total = total ^ arr[i];
        }
        if(n % 2 != 0){
            cout << total << '\n';
        }
        else{
            if(total == 0){
                cout << 3 << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
    }
    
}