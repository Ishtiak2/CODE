#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const ll N = 1e5 + 10;

// dp[i] will store the i-th Fibonacci number
ll dp[N];

// Top-down approach with memoization
// First write the brute-force recursion, then add memoization (DP) — this helps in understanding
// Time complexity: O(n)
// Space complexity: O(n) for the dp array and recursion stack

ll fib(ll n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (dp[n] != -1) return dp[n]; // Memoization check

    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    memset(dp, -1, sizeof(dp)); // Initialize dp array with -1. Can also use a loop.

    ll n = 50;

    // Using top-down approach
    cout << "Fibonacci(" << n << ") = " << fib(n) << endl;

    return 0;
}
