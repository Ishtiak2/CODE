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
        ll n,k,x;
        cin >> n >> k >> x;
        ll y = n - k;
        ll s = n *(n+1)/2;
        ll max = s - (y * (y+1)/2);
        ll min = k * (k+1)/2;

        if(x >= min && x <= max) cout <<"YES" << endl;
        else cout <<"NO" << endl;
    }
    return 0;
}