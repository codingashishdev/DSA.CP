#include<bits/stdc++.h>
using namespace std;

/* ok so the minisum sum is obtained from 1, 2, 3, ..., k 
would be (k*(k+1))/2

and the maximum sum can be achieved for the numbers n, n-1, n-2, n-k+1.
so its value of (n*(n+1)) - (n-k)(n-k+1)/2 
 meaning the sum of numbers from 1 to n - sum of all numbers from 1 to n−x elements
*/


int main(){
    int test;
    cin >> test;
    while(test--){
        long long n, k, x;
        cin >> n >> k >> x;
        long long minimumPossibleSum = (k * (k+1));
        long long maximumPossibleSum = n*(n+1) - (n-k)*(n-k+1);
        
        if(2*x >= minimumPossibleSum && 2*x <= maximumPossibleSum){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}