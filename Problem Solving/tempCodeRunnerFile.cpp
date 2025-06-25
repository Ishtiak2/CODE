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
        ll l,r,L,R;
        cin >> l >> r;
        cin >> L >> R;

        ll ans = 0;

        if(L > r || l > R) ans = 1;
        ll x = 2;
        if(l == L) x--;
        if(r== R) x--;

        if(l <= L && r>= R) ans = R-L+x;
        if(L <= l && R >= r) ans = r-l + x;
        if(L >= l && R >= r) ans = r-L+x;
        if(l >= L && r >= R) ans = R-l + x;

        cout << ans << endl;

    }
    return 0;
}