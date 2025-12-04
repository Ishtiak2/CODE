#include <bits/stdc++.h>
using namespace std;

// Modular Exponentiation

//Not suitable for large numbers
long long modPowSimple(long long base, long long exp, long long mod)
{ 
    long long result = pow((base % mod),exp);
    return result % mod;
}

// suitable for large numbers
long long modPowMedium(long long base, long long exp, long long mod)
{
    long long result = 1;
    base %= mod;

    for (int i = 0; i < exp; i++)
    {
        result = (result * base) % mod;
    }

    return result;
}

int modInverse(int a, int mod)
{
    a = a% mod;
    for (int x = 1; x < mod; x++)
    {
        if ((a * x) % mod == 1)
            return x;
    }
    return -1; // inverse doesn't exist
}

int main()
{
    long long a, b, mod;

    cout << "Enter a, b, mod: ";
    cin >> a >> b >> mod;

    // Modular Addition
    long long add = (a % mod + b % mod) % mod;

    // Modular Subtraction (avoid negative)
    long long sub = (a % mod - b % mod + mod) % mod;

    // Modular Multiplication
    long long mul = ((a % mod) * (b % mod)) % mod;

    // Modular Exponentiation: a^b mod m
    long long power = modPowMedium(a, b, mod);
    
    int inv = modInverse(a, mod);

    

    cout << "----- RESULTS -----" << endl;
    cout << "(a + b) % mod = " << add << endl;
    cout << "(a - b) % mod = " << sub << endl;
    cout << "(a * b) % mod = " << mul << endl;
    cout << "a^b % mod     = " << power << endl;

    if (inv == -1)
        cout << "Modular inverse does not exist" << endl;
    else
        cout << "Modular inverse of " << a << " mod " << mod << " is " << inv << endl;

    return 0;
}
