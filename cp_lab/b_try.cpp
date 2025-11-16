#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    ll n;

    while(cin >> n) {

        vector<ll> dp((n/2) + 1,0);

        for(ll i = 0; i <= dp.size()-1; i++) {
            
            ll x = i/2;
            ll y = i/3;
            ll z = i/4;

            dp[i] = max(i, dp[x] + dp[y] + dp[z]);
        }
        ll x = n/2;
        ll y = n/3;
        ll z = n/4;

        ll ans = dp[x] + dp[y] + dp[z];
        cout << max(ans, n) << endl;

    }
    return 0;
}