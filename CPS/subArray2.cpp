#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

const int mx = 2e5+123;
ll p[mx];
ll a[mx];

int main()
{
    optimize();

    ll n, x;
    cin >> n >> x;

    for(ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        p[i] = p[i-1] + a[i];
    }

    int count = 0;

    map<ll , ll> counter;

    for(ll i = 1; i <= n; i++)
    {
        
    }

    cout << count;

    return 0;
}

