#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool is_possible(int n, vector<ll>& a, vector<ll>& b) {
    if (n == 2) {
        return (a[0] + a[1] == b[0] + b[1]);
    }
    
    ll total_operations_low = 0;
    ll total_operations_high = 2e14;
    ll ans = -1;
    
    while (total_operations_low <= total_operations_high) {
        ll mid = (total_operations_low + total_operations_high) / 2;
        ll sum = 0;
        bool possible = true;
        
        for (int i = 0; i < n; ++i) {
            ll d = b[i] - a[i];
            ll x_i = max(0LL, (d + mid + 1) / 2);
            sum += x_i;
            
            if (sum > mid) {
                possible = false;
                break;
            }
        }
        
        if (possible && sum <= mid) {
            ans = mid;
            total_operations_high = mid - 1;
        } else {
            total_operations_low = mid + 1;
        }
    }
    
    return (ans != -1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        
        if (is_possible(n, a, b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}