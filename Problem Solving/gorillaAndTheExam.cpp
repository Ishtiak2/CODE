#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Comparator to sort by value
bool cmp(pair<ll, ll>& a, pair<ll, ll>& b) {
    return a.second < b.second;
}

// Sort map by value and return vector
vector<pair<ll, ll>> sortMapByValue(map<ll, ll>& M) {
    vector<pair<ll, ll>> A(M.begin(), M.end());
    sort(A.begin(), A.end(), cmp);
    return A;
}

int main() {
    optimize();
    ll t;
    cin >> t;

    while (t--) {
        map<ll, ll> mp;
        ll n, k;
        cin >> n >> k;

        for (ll i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            mp[x]++;
        }

        // Get sorted key-value pairs by value
        vector<pair<ll, ll>> sorted_mp = sortMapByValue(mp);

        // Remove up to k elements by value count
        for (auto& it : sorted_mp) {
            if (k >= it.second) {
                k -= it.second;
                it.second = 0;
            }
            else break;
        }

        // Count remaining non-zero frequencies
        ll count = 0;
        for (auto& it : sorted_mp) {
            if (it.second != 0) {
                count++;
            }
        }

        if (count == 0) cout << count + 1 << endl;
        else cout << count << endl;
    }

    return 0;
}
