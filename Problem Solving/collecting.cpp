#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        vector<pair<ll, ll>> a(n + 1);

        for (ll i = 1; i <= n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }

        sort(a.begin() + 1, a.end());

        vector<ll> nxt(n + 1, 0), sum(n + 1, 0), ans(n + 1, 0);

        for (ll i = 1; i <= n; i++) {
            
            if (nxt[i - 1] >= i) {
                nxt[i] = nxt[i - 1];
                sum[i] = sum[i - 1];
            }
            
            else {
                sum[i] = sum[i - 1] + a[i].first;
                nxt[i] = i;
                while (nxt[i] + 1 <= n && sum[i] >= a[nxt[i] + 1].first) {
                    nxt[i]++;
                    sum[i] += a[nxt[i]].first;
                }
            }
            
            ans[a[i].second] = nxt[i];
        }


        for (ll i = 1; i <= n; i++) {
            cout << ans[i] - 1 << " ";
        }
        cout << endl;

    }
    return 0;
}
