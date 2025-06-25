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
        ll arr[n][m];

        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < m; j++){
                cin >> arr[i][j];
            }
        }

        map<ll,ll> serial;

        for(ll i =0; i < n; i++) {
            sort(arr[i], arr[i]+ m);

            ll min = arr[i][0];
            serial[min] = i;
        }

        ll sequence[n];
        ll f = 0;

        for(auto it : serial){
            sequence[f] = it.second;
            f++;
        }

        bool flag = false;

        for(ll k = 0; k < n -1; k++) {
            ll i = sequence[k];
            ll s = sequence[k+1];
            for(ll j = 0; j < m; j++) {
                
                if(arr[i][j] + 1 != arr[s][j]){
                    flag = true;
                    break;
                }
            }
        }

        if(!flag) {
            for(auto it : sequence){
                cout << it + 1 <<" ";
            }
            cout << endl;
        }

        else cout <<"-1" << endl;

    }
    return 0;
}