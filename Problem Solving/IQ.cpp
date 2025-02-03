#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x, y, countEven, countOdd, ex, ey, ix, iy;
    countEven = countOdd = 0;

    for(int i = 1; i <= n; i++)
    {
        cin >> x;

        if(x % 2 != 0) countOdd++;
        else countEven++;

        if(i != 1 && ( (y%2) != (x%2) ) )
        {
            ex = x;
            ey = y;
            ix = i;
            iy = i-1;
        }

        y = x;
    }

    if(countOdd > countEven)
    {
        if(ex % 2 == 0) cout << ix;
        else cout << iy;
    }

    else
    {
        if(ex % 2 != 0) cout << ix;
        else cout << iy;
    }
    return 0;
}