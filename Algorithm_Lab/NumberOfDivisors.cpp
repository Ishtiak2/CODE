#include <bits/stdc++.h>
using namespace std;

void primeFactor(int n)
{
    vector<int> primes;
    vector<int> freq;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                n /= i;
                cnt++;
            }
            primes.push_back(i);
            freq.push_back(cnt);
        }
    }

    // If n is still > 1, it is a prime
    if (n > 1)
    {
        primes.push_back(n);
        freq.push_back(1);
    }

    // Count number of divisors
    int divisors = 1;
    for (int f : freq)
    {
        divisors *= (f + 1);
    }

    cout << divisors << endl;
}

int main()
{
    primeFactor(100);
    return 0;
}