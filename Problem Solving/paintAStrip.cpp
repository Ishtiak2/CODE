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

        ll i =1;
        ll val = 1;
        
        while(i < n) {
            i = (i+1) * 2;
            val++;
        }
        cout << val << endl;
    }
    return 0;
}