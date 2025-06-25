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
        ll n,m,q;
        cin >> n >> m >> q;
        
        ll t1,t2;
        cin >> t1 >> t2;

        ll d;
        cin >> d;

        ll tmin,tmax;

        if(t1 > t2){
            tmax = t1;
            tmin = t2;
        }
        else{
            tmax = t2;
            tmin = t1;
        }
        ll ans = 0;

        if(tmin > d) ans = tmin - 1;
        else if(tmax < d) ans = n - tmax;

        else if(d > tmin && d < tmax){
            
            if(tmin == 1 && tmax == 4) {
                ans = 1;
            }  
            else {  
            ans = (tmax - tmin) / 2;
            }
        }

        cout << ans << endl;
    }
    return 0;
}