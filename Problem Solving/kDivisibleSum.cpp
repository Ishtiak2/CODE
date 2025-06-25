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
        ll n,k;
        cin >> n >> k;

        ll ans;

        if(n >= k){
            if(n%k==0) ans = 1;
            else ans = 2;
        }

        else{
            if(k%n == 0) ans = k/n;
            else ans = k/n + 1;
        }

        cout<< ans << endl;
    }
    return 0;
}