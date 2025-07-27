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
        ll maxi = LLONG_MIN;
        ll mini = LLONG_MAX;

        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            maxi = max(a[i],maxi);
            mini = min(a[i], mini);
        }

    vector<ll> prefixMax(n), suffixMax(n);
    vector<ll> prefixMin(n), suffixMin(n);

    // Prefix max and min
    prefixMax[0] = a[0];
    prefixMin[0] = a[0];
    for (ll i = 1; i < n; ++i) {
        prefixMax[i] = max(prefixMax[i - 1], a[i]);
        prefixMin[i] = min(prefixMin[i - 1], a[i]);
    }

    // Suffix max and min
    suffixMax[n - 1] = a[n - 1];
    suffixMin[n - 1] = a[n - 1];
    
    
    for (ll i = n - 2; i >= 0; --i) {
        suffixMax[i] = max(suffixMax[i + 1], a[i]);
        suffixMin[i] = min(suffixMin[i + 1], a[i]);
    }

    for(ll i = 0; i < n; i++) {
            if(i == 0 || i == n-1 || a[i] == maxi || a[i] == mini) {
                cout <<"1";
            }
            else {
                ll left = prefixMin[i];
                ll right = suffixMax[i];

                if(left == a[i]) {
                    cout <<"1";
                }
                
                else {
                    if(right == a[i]) cout <<"1";
                    else cout <<"0";
                }

            }
        }
        cout << endl;
    }
    return 0;
}