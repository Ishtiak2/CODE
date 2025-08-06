#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

ll f(vector<vector<ll>> &a, ll n, ll last, vector<vector<ll>> &dp) {
    
    if(n == 1) {
        ll ans = LLONG_MIN;

        for(ll i = 1; i <= 3; i++) {
            if(last != i) ans = max(ans, a[1][i]);
        }
        return dp[n][last] = ans;
    }
    
    if(dp[n][last] != -1) return dp[n][last];

    ll ans = -1;

    for(ll take = 1; take <= 3; take++) {
        if(take != last) {
            ans = max(ans, a[n][take] + f(a, n-1,take,dp));
        }
    }

    return  dp[n][last] = ans;
}

ll fun(vector<vector<ll>> &a, ll n, vector<vector<ll>> &dp) {
    
    for(ll i = 1; i <= n; i++) {
        
        for(ll j = 1; j <= 3; j++) {
            if(i == 1) {
                dp[i][j] = a[i][j];
                continue;
            }

            for(ll k = 1; k <= 3; k++) {
                if(k != j) dp[i][j] = max(dp[i][j], a[i][j]+ dp[i-1][k]);
            }

        }
    }

    return max({dp[n][1], dp[n][2], dp[n][3]});
}

int main()
{
    optimize();
    ll n;
    cin >> n;

    vector<vector<ll>> a(n+1, vector<ll> (4));
    vector<vector<ll>> dp(n+1, vector<ll> (4,-1));

    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= 3; j++) {
            cin >> a[i][j];
        }
    }

    //cout << f(a,n,0,dp);
    cout <<fun(a,n,dp);

    return 0;
}