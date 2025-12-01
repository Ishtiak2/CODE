#include <iostream>
#include <vector>
using namespace std;

void sieveOfEratosthenes(int n)
{
    vector<bool> prime(n + 1, true); // initially assume all are prime
    prime[0] = prime[1] = false;     // 0 and 1 are not primes

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p])
        {
            // mark all multiples of p as not prime
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }

    cout << "Prime numbers up to " << n << " are:\n";
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    sieveOfEratosthenes(n);
    return 0;
}
// •  Time: O(n log log n)
// •  Space: O(n)
