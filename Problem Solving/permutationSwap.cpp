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
        vector<ll> v(n);
        vector<ll> vec;

        ll minEl = LLONG_MAX;

        for(ll i = 0; i < n; i++) {
            cin >> v[i];
            if(abs(v[i]-i-1) < minEl && (v[i] - i-1) != 0){
                minEl = abs(v[i] - i-1);
            }
            vec.push_back(abs(v[i] - i-1));


        }
        if(minEl == 1){
            cout <<"1" << endl;
            continue;
        }
        ll ans = 1;

        for(ll i = 0; i < vec.size(); i++) {
            if(vec[i] % minEl != 0){
                ans = 1;
                break;
            }
            else ans = minEl;
        }

        cout << ans << endl;
    }
    return 0;
}