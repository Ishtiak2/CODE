#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;
const ll mx = 3e5;
ll preSum[mx];
ll arr[mx];

int main()
{
    optimize();
    ll n,k;
    cin >> n >> k;

    ll min = INT_MAX;
    ll ans = 0;

    for(ll i = 1; i <= n; i++ ){
        cin >> arr[i];
        preSum[i] = preSum[i-1]+arr[i];
    }

    for(ll i = 1; i <= n-k+1; i++){
        if(min > ( preSum[k+i-1]-preSum[i-1])){
            min = preSum[k+i-1]-preSum[i-1];
            ans = i;
        }
    }

    cout << ans ;
    return 0;
}