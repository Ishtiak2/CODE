#include <bits/stdc++.h>
using namespace std;

void numberOfDiv(int n)
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            count++;
        }
    }

    cout << "Total divisors: " << count << endl;
}

int main()
{
    numberOfDiv(36);
    return 0;
}