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
        ll n,m,k;
        cin >> n  >> m >> k;

        vector<ll> arr(n+1);

        arr[0] = 0;
        ll x = 1;
        
        for(ll i = n; i >= k; i--) {
            arr[x] = i;
            x++;
        }

        for(ll i = m + 1; i < k; i++){
            arr[x] = i;
            x++;
        }
 
        for(ll i =1 ; i <= m; i++){
            arr[x] = i;
            x++;
        }

        for(ll i = 1; i <= n; i++){
            cout << arr[i] <<" ";
        }
        cout << endl;

    }
    return 0;
}