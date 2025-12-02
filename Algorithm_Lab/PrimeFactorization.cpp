#include <iostream>
#include <vector>
using namespace std;

vector<int> primeFactorization(int n)
{
    vector<int> factors;

    // Factor out 2s
    while (n % 2 == 0)
    {
        factors.push_back(2);
        n /= 2;
    }

    // Factor out odd numbers starting from 3
    for (int i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n /= i;
        }
    }

    // If remaining n is a prime number > 2
    if (n > 2)
    {
        factors.push_back(n);
    }

    return factors;
}

int main()
{
    int n = 30;

    vector<int> factors = primeFactorization(n);

    cout << "Prime factors: ";
    for (int f : factors)
    {
        cout << f << " ";
    }
    cout << endl;

    return 0;
}

/*
Steps to Find Prime Factorization
Start with the smallest prime, 2.
Divide the number by this prime as long as it is divisible.
Move to the next prime (3, 5, 7, …) and repeat.
Stop when the quotient becomes 1.
*/
