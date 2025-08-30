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

        for(ll i = 1; i <= n; i++) {
            cin >> a[i];
        }
        ll k = 0;

        for(ll j = 1; j <= n; j++) {
            ll f = k;

        for(ll i = 2; i <= n; i++) {

            if(a[i] % a[i-1] == 0) {
                if(a[i-1] == 1){
                    a[i-1]++;
                    k++;
                    continue;
                }
                
                if(i == n) {
                    a[i]++;
                    k++;
                    continue;
                }
                if(a[i+1] % (a[i]+1) == 0) a[i-1]++;
                else
                    a[i]++;
                k++;
            }
        }
        if(f == k || k == 2*n) break;
        }

        for(ll i = 1; i <= n; i++) {
            cout << a[i] <<" ";
        }
        cout << endl;
    }
    return 0;
}