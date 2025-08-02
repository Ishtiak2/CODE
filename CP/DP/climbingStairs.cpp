#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Recursive function with memoization
int f(int ind, vector<int>& dp) {
    if (ind == 0 || ind == 1) return 1;
    if (dp[ind] != -1) return dp[ind];

    return dp[ind] = f(ind - 1, dp) + f(ind - 2, dp);
}

int climbStairs(int n) {
    vector<int> dp(n + 1, -1); // cleaner initialization
    return f(n, dp);
}

int main() {
    optimize();
    cout << climbStairs(5) << endl;
    return 0;
}
