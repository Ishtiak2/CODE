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

        if(n% 2 == 0) cout <<"-1" << endl;
        else {
            for(ll i = n; i >0 ; i--){
                cout << i <<" ";
            }
            cout << endl;
        }
    }
    return 0;
}