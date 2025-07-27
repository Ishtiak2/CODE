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
        cin >> n >> k;
        vector<ll> l(n);
        vector<ll> r(n);

        for(ll i = 0; i < n; i++) {
            cin >> l[i];
        }
        for(ll i = 0; i < n; i++) {
            cin >> r[i];
        }

        ll sum = 0;
        vector<ll> v(n);

        for(ll i = 0; i < n; i++) {
            sum += max(l[i],r[i]);
            v.push_back(min(l[i],r[i]));
        }

        sort(v.begin(), v.end(),greater<ll>()) ;

        for(ll i= 0; i< k - 1;i++) {
            sum+=v[i];
        }
        cout << sum + 1 << endl;
    }
    return 0;
}