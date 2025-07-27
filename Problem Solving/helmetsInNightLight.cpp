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
        ll n,p;
        cin >> n >> p;
        vector<ll> a(n+1);
        vector<ll> b(n+1);
        vector<pair<ll,ll>> mp;

        
        for(ll i = 1; i <= n; i++) {
            cin >> a[i];
        }

        for(ll i = 1; i <= n; i++) {
            cin >> b[i];
            mp.push_back({b[i],a[i]});
        }
        ll c = p;
        ll m = n -1;
        
        sort(mp.begin(),mp.end());
        
        
        for(auto it : mp) {
            
            if(it.first > p) {
                c += m*p;
                m = 0;
                break;
            }

            if(it.second <= m) {
                c += (it.second * it.first);
                m = m - it.second;
            }

            else {
                c += (m * it.first);
                m = 0;
                break;
            }
        }

        c += (m * p);

        cout << c << endl;
        

    }
    return 0;
}