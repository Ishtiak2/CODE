#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    ll n;
    cin >> n;

    ll x;
    unordered_map<ll,ll> w;

    ll k = 1;

    for(ll i = 1; i <= n;i++){
        cin >> x;

        for(ll j = 1; j <= x; j++){
            w[k] = i;
            k++;
        }

    }
    ll m;
    cin >> m;

    for(ll i = 1; i <=m; i++){
        cin >> x;
        cout<< w[x] << endl;
    }
    
    return 0;
}