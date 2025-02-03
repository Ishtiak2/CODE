#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

#define optimize() ios_base:: sync_with_stdio (0) ;cin.tie (0) ;cout.tie (0) ;

int main()
{
    optimize();
    ll n, q, a, b;
    cin >> n >> q;

    ll arr[n];

    for(ll i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }

    for(ll i = 0; i < q; i++)
    {
        cin >> a >> b;

        int sum = 0;

        for(ll j = a-1; j <= b-1; j ++ )
        {
            sum = sum + arr[j];
        }

        cout << sum << endl;

    }
    return 0;
}