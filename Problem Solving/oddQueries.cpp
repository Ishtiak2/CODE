#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    ll t;
    cin >> t;

    while(t--) {
        ll n,q;
        cin >> n >> q;
        vector<ll> a(n+1);
        vector<ll> preSum(n+1);
        preSum[0] = 0;

        for(ll i = 1; i <= n; i++) {
            cin >> a[i];
            preSum[i] = preSum[i-1] + a[i];
        }    

        while(q--) {
            ll l,r,k;
            cin >> l >> r >> k;
            ll sum1 = preSum[l-1];
            ll sum2 = preSum[n] - preSum[r];

            ll sum = sum1 + sum2;

            ll x = (r-l+1) * k;

        
            if((sum + x) % 2 == 0) cout <<"NO" << endl;
            else cout <<"YES" << endl;

        }
    }
    return 0;
}