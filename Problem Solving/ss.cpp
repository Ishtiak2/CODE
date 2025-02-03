#include <bits/stdc++.h>
using namespace std;

long long countPairs(long long k, long long l1, long long r1, long long l2, long long r2) {
    long long count = 0;
    for (long long x = l1; x <= r1; ++x) {
        long long power = 1;
        while (power <= r2 / x) { // Avoid overflow
            long long y = x * power;
            if (y >= l2 && y <= r2) {
                count++;
            }
            if (power > r2 / k) break; // Prevent overflow
            power *= k;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        cout << countPairs(k, l1, r1, l2, r2) << "\n";
    }

    return 0;
}
