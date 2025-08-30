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
        vector<ll> arr(n);
        ll maxElement = INT_MIN;
        ll minElement = INT_MAX;

        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
            if(maxElement < arr[i]) {
                maxElement = arr[i];
            }
            if(minElement > arr[i]) {
                minElement = arr[i];
            }
        }
        ll ans = 0;
        
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        //if(arr[0] == minElement || arr[n-1] == maxElement) ans = maxElement - minElement;
        ans = max(ans, *max_element(arr.begin()+1, arr.end()) - arr[0]);
        ans = max(ans, arr[n-1] - *min_element(arr.begin(), arr.end()-1));
        
        for(ll i = 0; i < n-1; i++) {
                ans = max(ans, arr[i] - arr[i+1]);
            }

        cout << ans << endl;
    }
    return 0;
}