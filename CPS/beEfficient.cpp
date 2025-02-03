#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

const int mx = 1e5+123;
ll a[mx];
ll p[mx];

int main()
{
    optimize();

    ll t;
    cin >> t;
    
    ll i = 1;
    while(i <= t)
    {
        ll n,m;
        cin >> n >> m;
        
        ll z = 0;
        ll x = 0;
        
        map<ll,ll> mp;

        
        for(ll j = 1; j <= n; j++)
        {
            cin >> a[j];
            p[j] = p[j-1] + a[j];
            
            ll y = p[j] % m;
            if(y == 0) z++;
            else mp[y]++;    
        }
        
        ll sum = 0;
        for(auto u : mp)
        {
            sum = sum + *u;
        }
        
        ll result = ( z * (z+1)/2 ) + sum/2 ;
        
        cout <<"Case " << i << ": " << result << endl;
        
        i++;
    }
    return 0;
}

