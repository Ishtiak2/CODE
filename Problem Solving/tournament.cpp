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
        ll n,j,k;
        cin >> n >> j >> k;
        ll max = LLONG_MIN;
        vector<ll> a(n+1);

        for(ll i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            a[i] = x;

            if(x >= max) max = x;
        }

        if(k == 1) {
            if(a[j] == max) cout <<"YES" << endl;
            else cout <<"NO" << endl;
        }
        else cout <<"YES" << endl;
    }
    return 0;
}