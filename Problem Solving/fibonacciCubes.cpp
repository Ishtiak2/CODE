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
        ll n,m;
        cin >> n >> m;

        vector<ll> a(n+1);
        a[1] = 1;
        a[2] = 2;
        for(ll i = 3; i <= n; i++) {
            a[i] = a[i-1] + a[i-2];
        }


        for(ll i = 1; i <= m; i++) {
            ll height, width, length;

            ll w,l, h;
            cin >> w >> l >> h;
            
            height = width = length = a[n];

            if(a[n] + a[n-1] <= w){
                width = a[n] + a[n-1];
            }

            else if(a[n] + a[n-1] <= l){
                length = a[n] + a[n-1];
            }

            else height = a[n] + a[n-1];

            if(height > h || width > w || length > l ) {
                cout <<"0";
            }
            else cout <<"1";
        }
        cout << endl;
    }
    return 0;
}