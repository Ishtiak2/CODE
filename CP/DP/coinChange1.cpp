#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int INF = 1e9; // safer than INT_MAX for adding +1
int dp[10010];

int func(int amount, vector<int> &coins) {
    if (amount == 0) return 0;
    if (dp[amount] != -1) return dp[amount];

    int ans = INF;
    for (auto coin : coins) {
        if (amount - coin >= 0) {
            int res = func(amount - coin, coins);
            if (res != INF)
                ans = min(ans, res + 1);
        }
    }
    return dp[amount] = ans;
}

int coinChange(vector<int> &coins, int amount) {
    memset(dp, -1, sizeof(dp));
    int ans = func(amount, coins);
    return (ans == INF) ? -1 : ans;
}

int main() {
    optimize();
    vector<int> coins = {1, 2, 5};
    cout << coinChange(coins, 6) << endl;
    return 0;
}
