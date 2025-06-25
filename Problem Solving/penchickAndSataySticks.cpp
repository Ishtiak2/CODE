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
        vector<ll> arr(n+1);

        for(ll i = 1; i <= n; i++) cin >> arr[i];
        
        bool flag =  false;
        for(int i = 1; i <= n; i++){
            ll dif = abs(arr[i] - i);
            if(dif > 1) {
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }
        if(!flag)
            cout<< "YES" << endl;
    }
    return 0;
}