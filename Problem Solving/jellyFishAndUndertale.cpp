#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    ll t;
    cin >> t;

    while(t--) {
        ll a,b,n;
        cin >> a >> b >> n;

        vector<ll> x(n);
        ll c = 0;
        ll sum = 0;
        for(ll i = 0; i < n; i++) {
            cin >> x[i];
            if(x[i] >= a) c++;
            else sum+=x[i];
        }
        cout << sum + b + c*(-1) + (c*a) << endl;
    }
    return 0;
}