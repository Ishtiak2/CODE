#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    int t;
    cin >> t;

    ll n, m;

    while(t--) {
        cin >> n >> m;
        ll ans = m*(m-1)/2 + (m*(n+1)*(n)/2);
        cout << ans << endl;
    }
    return 0;
}