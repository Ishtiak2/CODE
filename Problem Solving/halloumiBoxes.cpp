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
        vector<ll> a(n);

        bool unsorted = false;

        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            
            if(i != 0 && a[i] < a[i-1]) {
                unsorted = true;
            }
        }

        if(n > 1 && k == 1 && unsorted) cout <<"NO" << endl;
        else cout <<"YES" << endl;
        
    }
    return 0;
}