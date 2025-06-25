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

        ll x = n/2;

        cout<< x * (x+1) * (2*x + 1) * 8 /6 << endl;
    }
    return 0;
}