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
        ll n,k;
        cin >> n  >> k;

        vector<ll> s(n);
        vector<ll> ta(n);
        vector<ll> occ(n,0);

        for(ll i = 0; i < n; i++) cin >> s[i];
        for(ll i = 0; i < n; i++) {
            cin >> ta[i];
            occ[i]++;
        }    

        for(ll i = 0; i < n; i++) {
            ll x = s[i];
            ll c1 = s[i];
            ll c2 = abs(s[i] - k);
            ll c3 = abs(s[i] + k);

            if((binary_search(ta.begin(),ta.end(),c1) == true && occ > 0) || (binary_search(ta.begin(),ta.end(),c2) == true && occ > 0) || (binary_search(ta.begin(),ta.end(),c3) == true && occ > 0)){
                continue;
            }
            if()
        }
    }
    return 0;
}