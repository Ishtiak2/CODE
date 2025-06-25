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
        unordered_map<ll,ll> mp;

        for(ll i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }

        ll countOne = 0;
        
        for(auto it: mp){
            if(it.second == 1) countOne++;
        }

        ll x = mp.size() - countOne;

        ll y = 0;
        if(countOne % 2 == 0) y = countOne /2;
        else y = (countOne+1)/2;
        
        cout<< x + 2 * y << endl;

    }
    return 0;
}