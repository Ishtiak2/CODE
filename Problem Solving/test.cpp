#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const ll mod=1000000000+7;
const ll m = 200000+123;
ll preSum[m];
ll arr[m];



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    for(ll i = 1; i <= n; i++){
        cin >> arr[i];
        preSum[i] = (preSum[i-1]%mod + arr[i]%mod)%mod;
    }

    ll ans = 0;

    for(ll i = 1; i < n; i++){
        //ans = ( ans % mod + (arr[i]%mod * (preSum[n] - preSum[i])%mod) % mod ) % mod;
        ans = ans%mod + (arr[i]%mod  * (preSum[n]%mod - preSum[i]%mod) %mod)%mod;
    }

    cout << ans ;


}

