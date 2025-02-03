#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

const int mx = 2e5+123;
ll preSum[mx];

int main()
{
    optimize();

    ll n,q;
    cin >> n >> q;

    vector<ll> array(n+1);
    array[0] = 0;
    
    for(int i = 1; i <= n; i++)
    {
        cin >> array[i];
        preSum[i] = preSum[i-1] ^ array[i];
    }

    while(q--)
    {
        ll a,b;
        cin >> a >> b;
        
        cout << (preSum[b] ^ preSum[a-1]) << endl;

    }
    return 0;
}

