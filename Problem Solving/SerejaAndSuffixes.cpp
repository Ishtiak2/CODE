#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;
const ll k = 1e5+123;

ll s[k];
ll a[k];

int main()
{
    optimize();
    ll n,ms;
    cin >> n >> ms;
    
    map<ll,bool> m;

    for(ll i =1; i <= n; i++){
        cin >> a[i];
        m[a[i]] = false;
    }

    s[n] = 1;
    m[a[n]] = true;

    for(ll i = n-1; i > 0; i--){
        ll x = a[i];

        if(m[x] == false){
            s[i] = s[i+1] + 1;
        }

        else{
            s[i] = s[i+1];
        }
        m[x] = true;
    }

    while(ms--){
        ll x;
        cin >> x;

        cout<<s[x]<<endl;
    }
    return 0;
}