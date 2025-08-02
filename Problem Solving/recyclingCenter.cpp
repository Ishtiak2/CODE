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
        ll n,c;
        cin >> n >> c;
        vector<ll> vec(n+1);
        vector<bool> check(n+1,false);

        for(ll i = 1; i <= n; i++) {
            cin >> vec[i];
        }

        sort(vec.begin()+1,vec.end());

        ll k = 0;
        for(ll i = 1; i <= n; i++) {
            if(vec[i]*2 > c){
                k = i;
                break;
            }
        }

        for(ll i = k; i > 0; i--) {
            if(vec[i] <= c) {
                check[i] = true;
                
                for(ll j = 1; j < i; j++){
                   vec[j] = vec[j] * 2;
                }
            }
            else {
                while(vec[i] > c && i != 0){
                    i--;
                }
                check[i] = true;
            }  
            
        }

        ll count = 0;

        for(ll i = 1; i <= n; i++){
            if(!check[i]) count ++;
        }

        cout << count << endl;

    }
    return 0;
}