#include <bits/stdc++.h>
using namespace std;

vector<int> linearSieve(int n)
{
    vector<int> primes;
    vector<bool> isPrime(n + 1, true);

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
            primes.push_back(i);

        for (int p : primes)
        {
            if (i * p > n)
                break;
            isPrime[i * p] = false;
            if (i % p == 0)
                break;
        }
    }

    return primes;
}

int main()
{
    int n = 20;
    vector<int> primes = linearSieve(n);
    for (int p : primes)
        cout << p << " ";
    return 0;
}

/*
Time Complexity : o(n)
Space Complexity: o(n)
*/