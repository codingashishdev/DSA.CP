#include <bits/stdc++.h>
using namespace std;

int divisibleSumPairs(vector<long long> arr, int n, int k){
    unordered_map<int, int> remainderCount;
    remainderCount[0] = 1; // Empty prefix has remainder 0
    
    long long prefixSum = 0;
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];
        int remainder = ((prefixSum % k) + k) % k; // Handle negative remainders
        cnt += remainderCount[remainder];
        remainderCount[remainder]++;
    }
    
    return cnt;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> arr1(n);
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    cout << divisibleSumPairs(arr1, n, k);
    // cout << result;
    return 0;
}