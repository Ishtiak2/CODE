#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}


int main()
{
    optimize();
    ll t;
    cin >> t;

    while(t--) {
        ll x,k;
        cin >> x >> k;
        
        if(x == 1 && k == 2){
            cout <<"YES" << endl;
            continue;
        }

        if(k > 1){
            cout <<"NO"<< endl;
        }
        
        else {
            if(!isPrime(x)){
                cout <<"NO" << endl;
            }
            else cout <<"YES" << endl;
        }
    }
    return 0;
}