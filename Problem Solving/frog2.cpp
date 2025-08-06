#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    ll n,k;
    cin >> n >> k;

    vector<ll> a(n);
    vector<ll> dp(n,-1);

    for(ll i = 0; i < n; i++) cin >> a[i];

    dp[0] = 0;

    for(ll i = 1; i < n; i++) {
        ll ans = LLONG_MAX;
        
        for(ll j = 1; j <= k; j++) {
            if(i>=j){
                ans = min(ans, abs(a[i] - a[i-j]) + dp[i-j]);
            }
            else break;
        }

        dp[i] = ans;
    }
    cout <<dp[n-1];

    return 0;
}