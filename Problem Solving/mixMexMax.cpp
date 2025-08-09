//wrong answer

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
        int a[n];

        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool ans = false;

        for(ll i = 0; i <n-2; i++) {
            ll c0,c1;
            c0 = c1 = 0;

            ll sc = -1;
            ll count = 0;

            for(ll j = i; j <= i+2; j++) {
                count = 1;
                for(ll k = j+1; k <=i+2; k++) {
                    if(a[j] == a[k]) count++;
                }
                sc = max(sc,count);
            }

            for(ll j = i; j <= i+2; j++) {
                if(a[j] == 0) c0++;
                if(a[j] == -1) c1++;
            }

            if(c0 > 0){
                ans = true;
                break;
            }

            if(c0 == 0) {
                if(!((sc == 2 && c1 == 1) || (sc == 3) || (c1 == 3) || (sc == 1 && c1 == 2))){
                    ans = true;
                    break;
                }
            }

        }

        if(ans) cout <<"NO" << endl;
        else cout <<"YES" << endl;

    }
    return 0;
}