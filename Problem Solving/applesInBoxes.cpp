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
        ll n,k;
        cin >> n >> k;

        vector<ll> arr(n+1);
        ll max = LLONG_MIN;
        ll min = LLONG_MAX;
        ll sum = 0;

        for(ll i = 1; i <= n; i++) {
            cin >> arr[i];
            sum += arr[i];
            if(max < arr[i]) max = arr[i];
            if(min > arr[i]) min = arr[i];
        }
        
        ll cmax = 0;

        for(ll i = 1; i <= n; i++) {
            if(max == arr[i]) cmax++;
        }

        if(max - min - 1 > k || (max - min -1 == k && cmax > 1) ) cout <<"Jerry" << endl;
        
        else {
            
            if(sum % 2 == 0) cout <<"Jerry" << endl;
            else cout <<"Tom"  << endl;
        }
    }
    return 0;
}