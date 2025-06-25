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
        ll n;
        cin >> n;

        unordered_map<ll,ll> pos;
        unordered_map<ll,ll> neg;

        for(int i = 1; i <= n; i++){
            ll x;
            cin >> x;

            int y = i-x;

            if(y >= 0) pos[y]++;
            else if(y < 0) neg[y]++;
        }

        ll count = 0;
        ll x;

        for(auto it : pos){
            x = it.second;
            count+= x*(x-1)/2;
        }

        for(auto it : neg){
            x = it.second;
            count += x*(x-1)/2;
        }

        cout<<count<<endl;
    }
    return 0;
}