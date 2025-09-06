#include <bits/stdc++.h>
using namespace std;

// Common DP patterns and templates

// 1. Memoization template for recursive DP
class MemoizationDP {
private:
    vector<vector<int>> memo;
    
public:
    // Example: Fibonacci with memoization
    int fibonacci(int n) {
        memo.resize(n + 1, vector<int>(2, -1));
        return fibHelper(n);
    }
    
private:
    int fibHelper(int n) {
        if (n <= 1) return n;
        
        if (memo[n][0] != -1) return memo[n][0];
        
        memo[n][0] = fibHelper(n - 1) + fibHelper(n - 2);
        return memo[n][0];
    }
};

// 2. Tabulation template for iterative DP
class TabulationDP {
public:
    // Example: Fibonacci with tabulation
    int fibonacci(int n) {
        if (n <= 1) return n;
        
        vector<int> dp(n + 1);
        dp[0] = 0;
        dp[1] = 1;
        
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        
        return dp[n];
    }
    
    // Example: Climbing stairs problem
    int climbStairs(int n) {
        if (n <= 2) return n;
        
        vector<int> dp(n + 1);
        dp[1] = 1;
        dp[2] = 2;
        
        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        
        return dp[n];
    }
};

// 3. 2D DP template
class TwoDimensionalDP {
public:
    // Example: Longest Common Subsequence
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();
        
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        
        return dp[m][n];
    }
    
    // Example: Edit Distance
    int editDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        
        // Base cases
        for (int i = 0; i <= m; i++) dp[i][0] = i;
        for (int j = 0; j <= n; j++) dp[0][j] = j;
        
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (word1[i - 1] == word2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                } else {
                    dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
                }
            }
        }
        
        return dp[m][n];
    }
};

// 4. Knapsack DP template
class KnapsackDP {
public:
    // 0/1 Knapsack
    int knapsack01(vector<int>& weights, vector<int>& values, int capacity) {
        int n = weights.size();
        vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));
        
        for (int i = 1; i <= n; i++) {
            for (int w = 0; w <= capacity; w++) {
                if (weights[i - 1] <= w) {
                    dp[i][w] = max(dp[i - 1][w], 
                                  dp[i - 1][w - weights[i - 1]] + values[i - 1]);
                } else {
                    dp[i][w] = dp[i - 1][w];
                }
            }
        }
        
        return dp[n][capacity];
    }
    
    // Unbounded Knapsack (Coin Change)
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;
        
        for (int coin : coins) {
            for (int i = coin; i <= amount; i++) {
                if (dp[i - coin] != INT_MAX) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }
        
        return dp[amount] == INT_MAX ? -1 : dp[amount];
    }
};

// 5. State compression DP template
class StateCompressionDP {
public:
    // Example: Traveling Salesman Problem (TSP)
    int tsp(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> dp(1 << n, vector<int>(n, INT_MAX));
        
        // Base case: starting from city 0
        dp[1][0] = 0;
        
        for (int mask = 1; mask < (1 << n); mask++) {
            for (int last = 0; last < n; last++) {
                if (!(mask & (1 << last))) continue;
                
                int prev = mask ^ (1 << last);
                for (int curr = 0; curr < n; curr++) {
                    if (!(prev & (1 << curr))) continue;
                    
                    if (dp[prev][curr] != INT_MAX && graph[curr][last] != INT_MAX) {
                        dp[mask][last] = min(dp[mask][last], 
                                           dp[prev][curr] + graph[curr][last]);
                    }
                }
            }
        }
        
        // Return to starting city
        int result = INT_MAX;
        for (int i = 1; i < n; i++) {
            if (dp[(1 << n) - 1][i] != INT_MAX && graph[i][0] != INT_MAX) {
                result = min(result, dp[(1 << n) - 1][i] + graph[i][0]);
            }
        }
        
        return result;
    }
};

// 6. Digit DP template
class DigitDP {
private:
    string num;
    vector<vector<vector<int>>> memo;
    
public:
    int countNumbers(int n) {
        num = to_string(n);
        memo.resize(num.length(), vector<vector<int>>(2, vector<int>(10, -1)));
        return solve(0, 1, 0);
    }
    
private:
    int solve(int pos, int tight, int prev) {
        if (pos == num.length()) return 1;
        
        if (memo[pos][tight][prev] != -1) return memo[pos][tight][prev];
        
        int limit = tight ? num[pos] - '0' : 9;
        int count = 0;
        
        for (int digit = 0; digit <= limit; digit++) {
            int newTight = tight && (digit == limit);
            count += solve(pos + 1, newTight, digit);
        }
        
        return memo[pos][tight][prev] = count;
    }
};

// Example usage
int main() {
    // Test Memoization DP
    MemoizationDP memoDP;
    cout << "Fibonacci (memoization): " << memoDP.fibonacci(10) << endl;
    
    // Test Tabulation DP
    TabulationDP tabDP;
    cout << "Fibonacci (tabulation): " << tabDP.fibonacci(10) << endl;
    cout << "Climb stairs: " << tabDP.climbStairs(5) << endl;
    
    // Test 2D DP
    TwoDimensionalDP twoDDP;
    cout << "LCS: " << twoDDP.longestCommonSubsequence("abcde", "ace") << endl;
    cout << "Edit distance: " << twoDDP.editDistance("horse", "ros") << endl;
    
    // Test Knapsack DP
    KnapsackDP knapsackDP;
    vector<int> weights = {1, 3, 4, 5};
    vector<int> values = {1, 4, 5, 7};
    cout << "0/1 Knapsack: " << knapsackDP.knapsack01(weights, values, 7) << endl;
    
    vector<int> coins = {1, 2, 5};
    cout << "Coin change: " << knapsackDP.coinChange(coins, 11) << endl;
    
    return 0;
} 