#include <iostream>
using namespace std;

// Without modulo
long long power(long long a, long long b) {
    long long result = 1;
    while (b > 0) {
        if (b & 1)           // If the current bit is 1
            result *= a;     // Multiply result with current base
        a *= a;              // Square the base
        b >>= 1;             // Shift exponent to the right (divide by 2)
    }
    return result;
}

// With modulo
const long long MOD = 1e9 + 7;

long long power_mod(long long a, long long b, long long mod = MOD) {
    long long result = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1)                 // If the current bit is 1
            result = (result * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return result;
}

int main() {
    long long a = 3, b = 6;

    cout << "Power without modulo: " << power(a, b) << endl; // 729
    cout << "Power with modulo:    " << power_mod(a, b) << endl; // 729

    // Example with large power and modulo
    cout << "3^1000000 mod 1e9+7 = " << power_mod(3, 1000000) << endl;

    return 0;
}
