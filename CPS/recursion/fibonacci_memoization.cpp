#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll memo[1000]; // Array for memoization, large enough to store required values

ll fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    // Check if the value has already been calculated
    if (memo[n] != -1) {
        return memo[n];
    }

    // Calculate and store the result in the array
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main() {
    optimize();

    // Initialize the memoization array with -1
    memset(memo, -1, sizeof(memo));

    for (int i = 0; i <= 10; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
