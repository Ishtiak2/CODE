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

        ll k = log(n+1)/log(2) + 1;
        bool flag = false;

        for(int i = 1; i <= k; i++){
            ll y = pow(2,i+1) - 1;
            if(n%y == 0){
                cout<< n/y <<endl;
                break;
            }
        }
        
    }
    return 0;
}