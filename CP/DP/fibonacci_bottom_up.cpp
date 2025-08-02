#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Bottom-up DP to compute Fibonacci number
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    optimize();
    int n = 6;
    cout << fib(n) << endl;
    return 0;
}
