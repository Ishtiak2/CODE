#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    
    ll n,m;
    cin >> n >> m;

    ll p = 1;
    ll count = 0;
    
    for(ll i = 1; i <= m; i++){
        ll x;

        cin >> x;
        
        if(x >= p){
            count+= x-p;
            p = x;
        }

        else if(x < p){
            count = count+ n - p +x;
            p = x;
        }

    }

    cout << count;

    return 0;
}