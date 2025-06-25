#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    ll n,x;
    cin >> n >> x;

    ll count = 0;

    for(ll i = 1; i <= n; i++){
        
        if(x % i == 0 && x/i <= n){
            count++;
        }
    }

    cout<<count;

    return 0;
}