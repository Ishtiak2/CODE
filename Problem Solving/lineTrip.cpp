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
        ll n,x;
        cin >> n >> x;
        ll p = 0;
        ll ans = 0;

        for(ll i = 1; i <= n; i++) {
            ll y;
            cin >> y;

            if(y - p > ans) ans = y-p;
            p = y;
        }
    
        ans = max(ans,2*(x-p));
        cout << ans << endl;
    }
    return 0;
}