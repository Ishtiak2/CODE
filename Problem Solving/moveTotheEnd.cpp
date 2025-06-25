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
        arr[0] = 0;
        
        vector<ll> maxPre(n+1);
        maxPre[0] = 0;

        for(ll i = 1; i <= n; i++) {
            cin >> arr[i];
            maxPre[i] = max(maxPre[i-1],arr[i]);
        }

        ll sum = 0;
        ll ans = 0;
        for(ll i = n; i >= 1; i--) {
            ans = sum + maxPre[i];
            sum += arr[i];
            cout << ans <<" ";
        }
        cout << endl;
    }
    return 0;
}