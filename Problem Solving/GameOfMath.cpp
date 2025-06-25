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

    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll> arr(n);
        unordered_map<ll,ll> mp;
        ll score = 0;

        for(ll i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        sort(arr.begin(), arr.end());
        for(int i = 0; i < n; i++){
            ll x = arr[i];
            mp[x]--;
            
            if( mp[k-x] > 0){
                mp[k-x]--;
                score++;
            }
        }
        cout<< score << endl;
    }
    return 0;
}