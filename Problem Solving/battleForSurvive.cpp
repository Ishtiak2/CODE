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

        vector<ll> arr(n);
        ll sum = 0;

        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
            if(i < n-2)
                sum +=arr[i];
        }

        cout << arr[n-1] - arr[n-2] + sum << endl;
    }
    return 0;
}