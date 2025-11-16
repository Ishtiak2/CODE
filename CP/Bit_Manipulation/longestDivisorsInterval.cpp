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

        ll count = 0;
        vector<ll> v;

        if(n % 2 != 0){
            cout <<"1" << endl;
            continue;
        }

        for(ll i = 1; i <= n; i++) {
            if(n % i == 0) count++;
            else if(count > 0){
                v.push_back(count);
                count = 0;
                break;
            }    
        }
        v.push_back(count);

        cout << *max_element(v.begin(),v.end()) << endl;
    }
    return 0;
}