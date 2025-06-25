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
        cin >> n >> m >> k;

        vector<bool> check(n+1,false);
        vector<ll> arr(m+1);

        for(ll i = 1; i <= m; i++) {
            cin >> arr[i];
        }
        
        for(ll i = 1; i <= k; i++) {
            ll x;
            cin >> x;
            check[x] = true;
        }

        ll cmiss = 0;
        ll miss = 0;

        for(ll i = 1; i <= n; i++) {
            
            if(!check[i]){
                cmiss++;
                miss = i;
            }
            if(cmiss > 1){
                break;
            }
        }
        
        if(cmiss == 0){
            for(ll i = 1; i <= m; i++){
                cout<<"1";
            }
            cout << endl;
        }

        else if(cmiss > 1){
            for(ll i = 1; i <= m; i++){
                cout <<"0";
            }
            cout << endl;
        }

        else {
            for(ll i = 1; i <= m; i++) {
                if(arr[i] == miss) cout <<"1";
                else cout <<"0";
            }
            cout << endl;
        }
        
    }
    return 0;
}