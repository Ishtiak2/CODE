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
        ll n;
        cin >> n;

        vector<ll> a(n+1);
        vector<ll> b(n+1);

        for(ll i = 1; i <= n; i++) {
            cin >> a[i];
        }

        for(ll i = 1; i <= n; i++) {
            cin >> b[i];
        }

        ll x,y,z;
        ll fa,fb,la,lb;
        fa = fb = 1;
        la = lb = n;
        x = y = z = 0;

        for(ll i = 1; i <= n-1; i++) {
            if(z != a[fa] && (a[fa] != b[fb] && a[fa] != b[lb])) {
                x = a[fa];
                //cout <<"chosen: " << x;
                fa++;
            }

            else{
                y = a[la];
                //cout <<"chosen: " << y;
                la--;
            }

            if(x == b[fb] || y == b[fb]) {
                z = b[fb];
                    //            cout <<"chosen: " << z;

                fb++;
            }
            else{
                z = b[lb];
                    //            cout <<"chosen: " << z;

                lb--;
            }

        }
        //cout <<a[fa] <<" " << b[fb] <<endl;
        if(a[fa] == b[fb]) cout <<"Bob" << endl;
        else cout <<"Alice" << endl;

    }
    return 0;
}