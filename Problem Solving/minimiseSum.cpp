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
        ll n;
        cin >> n;
        vector<ll> a(n);

        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll ans = -1;

        if(a[0] >= a[1]) ans = a[0] + a[1];
        else ans = 2 * a[0];

        cout << ans << endl;

    }
    return 0;
}