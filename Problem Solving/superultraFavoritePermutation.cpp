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

        ll n;
        cin >> n;
        vector<ll> vec(n+1);
        ll x = 1;
        ll j = 1;
        
        for(j = 1; x <= n; j++){
            vec[j] = x;
            x+=2;
        }
        //j++;
        ll y = j;
        ll f = j-1;

        x = 2;
        while(j <= n){
            vec[j] = x;
            x+=2; 
            j++;
        }

        bool flag = false;

        while(y <= n){
            
            if(!isPrime(vec[f]+vec[y])){
                flag = true;
                ll a = vec[f+1];
                vec[f+1] = vec[y];
                vec[y] = a;
                break;
            }

            y++;
        }
        if(!flag) cout <<"-1" << endl;
        
        else{
            
            for(ll i = 1; i <= n; i++){
                cout << vec[i] <<" ";
            }
            cout << endl;
        }
       

    }
    return 0;
}