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

    ll n,m;
    ll b;

    while(t--) {
        cin >> n >> m;
        vector<ll> a(n);

        for(ll i = 0; i <n; i++) {
            cin >> a[i];
        }
        cin >> b;

        bool flag = false;
        
        if(n==1){
            cout <<"YES" << endl;
            continue;
        }

        for(ll i = 0; i < n-1; i++) {
            
            if(a[i] > a[i+1]){
                
                if(b-a[i] <= a[i])
                    a[i] = b - a[i];
                
                else if(b-a[i+1] > a[i+1]){
                    a[i+1] = b = a[i+1];
                }    
                
            }

        }
        if( (b - a[n-1]) > a[n-1])
            a[n-1] = b - a[n-1];

        for(ll i = 0; i < n-1; i++){
            if(a[i] > a[i+1]){
                flag = true;
                break;
            }
        }
        if(flag) cout <<"NO" <<endl;
        else cout <<"YES" << endl;

        a.clear();

    }
    return 0;
}