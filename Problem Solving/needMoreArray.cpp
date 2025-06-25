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

        vector<ll> arr(n+1);

        for(ll i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        ll count = 1;
        ll ref = arr[1];

        for(ll i = 1; i <= n; i++) {
            if(ref + 1 < arr[i]) {
                ref = arr[i];
                count ++;
            }
        }

        cout << count << endl;
    }
    return 0;
}