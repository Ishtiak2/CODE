#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll f(ll ind, ll last, vector<vector<ll>> &a, vector<vector<ll>> &dp) {
    if(ind == 0) return 0;
    if(dp[ind][last] != -1) return dp[ind][last];

    ll ans = 0;
    for(ll i = 1; i <= 3; i++) {
        if(i != last) {
            ans = max(ans, f(ind - 1, i, a, dp) + a[ind][i]);
        }
    }

    return dp[ind][last] = ans;
}

int main() {
    optimize();
    ll n;
    cin >> n;

    vector<vector<ll>> a(n + 1, vector<ll>(4));
    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= 3; j++) {
            cin >> a[i][j];
        }
    }

    vector<vector<ll>> dp(n + 1, vector<ll>(4, -1));
    cout << f(n, 0, a, dp) << endl;

    return 0;
}
