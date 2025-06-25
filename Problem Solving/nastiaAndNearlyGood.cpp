#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int q;
    cin >> q;

    while (q--) {
        int a, b;
        cin >> a >> b;
        
        if (b == 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << a << ' ' << a * (long long)b << ' ' << a * (long long)(b + 1) << '\n';
        }
    }

    return 0;
}
