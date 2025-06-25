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
    map<ll,ll> laptop;

    while(t--){
        ll a, b;
        cin >> a >> b;
        laptop[a] = b;
    }

    int prev = INT_MIN;

    for(auto it : laptop){
                
        if(it.second < prev){
            cout<< "Happy Alex";
            return 0;
        }

        prev = it.second;
    }

    cout<<"Poor Alex";

    return 0;
}