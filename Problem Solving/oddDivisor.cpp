#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    setprecision(4);

    ll t;
    cin >> t;

    ll n;
    while(t--){
        cin >> n;
        bool flag = false;

        if(n%2==1){
            cout <<"YES" << endl;
        }

        else {
            ll x = log(n)/log(2);
            if(pow(2,x) == n){
                cout <<"NO" << endl;
            }
            else cout <<"YES" << endl;
        }
    }
    return 0;
}