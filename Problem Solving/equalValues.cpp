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
        vector<ll> v;
        ll count = 1;

        for(ll i = 1; i <= n; i++) {
            if(i != n && a[i] == a[i+1]) count ++;
            
            else {
                v.push_back(a[i] * (n-count));
                count = 1;
            }

        }
        auto min = min_element(v.begin(), v.end());
        if (min != v.end()) {
        cout << *min << endl;
    }

        
    }
    return 0;
}