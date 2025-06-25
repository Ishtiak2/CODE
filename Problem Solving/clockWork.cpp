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

        ll x;
        bool flag = false;
        vector<ll> arr(n+1);

        for(ll i = 1; i <= n; i++){
            cin >> arr[i];
        }

        for(ll i = 1,j = n; i <= j; i++, j--){
            if((arr[i] <= (n-i)*2) || (arr[j] <= (n-i) * 2)){
                flag = true;
                break;
            }
        }

        if(!flag) cout<< "YES" << endl;
        else cout<< "NO" << endl;
    }
    return 0;
}