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
        ll n,k,x;
        cin >> n >> k >> x;
        
        vector<ll> a(n+1);
        ll sum = 0;
        ll s = 0;

        for(ll i = 1; i <= n; i++) {
            cin >> a[i];
            sum +=a[i];
        }

        s = sum * k;
        ll d = s - x;

        if(d < 0){
            cout <<"0" << endl;
            continue;
        }

        ll m = d / sum;
        ll y = m * sum;
        ll ans = m * n;

        ll r = d - y;

        for(ll i = 1; i <= n; i++) {
            
            if(y + a[i] <= d){
                ans++;
                y = y + a[i];
            }
            else {
                break;
            }
        }

        cout << ans + 1 << endl;
    }

    return 0;
}