#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    ll t = 10;

    while(t--) {
        ll n;
        cin >> n;

        vector<ll> dp(n/2 + 1,0);

        for(ll i = 0; i <= dp.size()-1; i++) {
            
            ll x = i/2;
            ll y = i/3;
            ll z = i/4;

            dp[i] = max(i, dp[x] + dp[y] + dp[z]);
        }
        ll ans = dp[n/2] + dp[n/3] + dp[n/4];
        cout << max(ans, n) << endl;

    }
    return 0;
}