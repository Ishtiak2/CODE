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
        ll a,b,x,y;
        cin >> a >> b >> x >> y;
        ll ans = 0;

        if(a > b && ((a - b) > 1 || a%2 == 0)) {
            cout <<"-1" << endl;
            continue;
        }
        if(a > b && (a%2 != 0) && (a - b == 1)) {
            cout <<y << endl;
            continue;
        }

        for(ll i = a; i < b; i++) {
            if(i % 2 == 0) {
                ans+=min(x,y);
            }
            else {
                ans+=x;
            }
        }

        cout << ans << endl;
    }
    return 0;
}