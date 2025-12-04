#include <bits/stdc++.h>
using namespace std;

int eulerTotient(int n)
{
    int result = n;
    vector<int> primes;

    // Find distinct prime factors
    for (int p = 2; p * p <= n; p++)
    {
        if (n % p == 0)
        {
            primes.push_back(p);
            while (n % p == 0)
                n /= p;
        }
    }

    // If n is still > 1, then it is a prime factor
    if (n > 1)
    {
        primes.push_back(n);
    }

    // Apply the general Euler Totient formula
    for (int p : primes)
    {
        result = result * (1.0 - (1.0 / p));
    }

    return (int)result;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "φ(" << n << ") = " << eulerTotient(n) << endl;

    return 0;
}
