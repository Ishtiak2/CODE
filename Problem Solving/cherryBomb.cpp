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
        ll n,k;
        cin >> n >> k;
        
        vector<ll> a(n+1);
        vector<ll> b(n+1);
        ll max = INT_MIN;
        ll min = INT_MAX;

        for(ll i = 1; i <= n; i++) {
            cin >> a[i];
            if(a[i] > max) max = a[i];
            if(a[i] < min) min = a[i];
        }

        ll countOne = 0;
        ll x = 0;
        for(ll i = 1; i <= n; i++) {
            cin >> b[i];
            
            if(b[i] == -1) countOne++;
            else x = a[i] + b[i];
        }
        
        if(countOne == n) {
            cout << k + min - max + 1 << endl;
            continue;
        }
        if(max > k){
            cout <<"0"<<endl;
            continue;
        }
        
        bool flag = false;

        for(ll i = 1; i <= n; i++) {
            
            if(a[i] > x || (b[i] != -1 && (a[i] + b[i] != x))) {
                flag = true;
                break;
            }

            
             if(b[i] == -1){
                if(a[i] + k < x){
                    flag = true;
                    break;
                }
             }
        }
        if(!flag) cout << "1" << endl;
        else    cout <<"0" << endl;

    }
    return 0;
}