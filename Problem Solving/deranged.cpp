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
        vector<ll> a(n);

        for(ll i = 0 ; i< n; i++) {
            cin >> a[i];
        }

        ll x,y;
        x=y=-1;

        for(ll i = 0; i < n-1; i++) {
            for(ll j = i+1; j < n; j++) {
                if(a[i] > a[j]){
                    x = a[i];
                    y = a[j];
                    break;
                }
            }
        }

        if(x == -1) cout <<"NO" << endl;
        else{
            cout <<"YES" << endl;
            cout <<"2" << endl;
            cout <<x <<" " <<y << endl;
        }
    }
    return 0;
}