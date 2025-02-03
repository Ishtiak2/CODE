#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long long int l, r, x, y;

    while(t--)
    {
        cin >> l >> r;

        if(l*2 <= r)
        {
            cout << l << " " << l*2 << endl;
        }

        else
            cout << "-1 -1" << endl;
        
    }

    return 0;
}