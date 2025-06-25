#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            a[i] = abs(a[i]);
        }

        ll first = a[0];
        sort(a.begin(), a.end());

        // median position (1-based): floor(n/2) + 1
        ll median_pos = n / 2; // 0-based index for floor(n/2)
        
        if (first <= a[median_pos]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
