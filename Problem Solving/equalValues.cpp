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
        unordered_map<ll,ll> mp;

        ll x;
        for(ll i = 1; i <= n; i++) {
            cin >> x;
            mp[x]++;
        }

        ll min = INT_MAX;

        for(auto it : mp) {
            ll ans = (n - it.second) * it.first;
            if(min > ans) min = ans;
        }

        cout << min << endl;
    }
    return 0;
}