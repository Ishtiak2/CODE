#include <bits/stdc++.h>
using namespace std;
#define    ll              long long
#define    endl            "\n"
#define    fast_io         ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define    pb              push_back
using      vl = vector<ll>;
#define    vvl             vector<vl>
#define    asort(v)        sort(v.begin(),v.end())
#define    dsort(v)        sort(v.rbegin(),v.rend())
#define    pll             pair<ll,ll>
#define    vpl             vector<pll> 
#define    rev(v)          reverse (v.begin(),v.end());
#define    upb(vec,val)    ((upper_bound((vec).begin(), (vec).end(), (val))) - (vec).begin())
#define    lwb(vec,val)    ((lower_bound((vec).begin(), (vec).end(), (val))) - (vec).begin())
#define    sl              set<ll> 
#define    spl             set<pll> 
#define    in              insert
#define    c1              __builtin_popcountll
const ll inf = 1e18;
const ll mx = 1e5+2;

int main() {
    fast_io;

    ll t;
    cin>>t;
    while(t--){
        ll n , px, py,qx, qy;
        cin>>n;

        cin>> px >>py >>qx>>qy;

        vl v(n);
        for(auto &d:v) cin>>d;
        
        ll dx = px-qx;
        ll dy = py-qy;
        ll D2 = dx*dx + dy*dy;

        asort(v);

        ll S = 0;

        for(auto d:v) S += d;

        ll M = v.back();

        ll S2 = S * S;
        ll diff = 2 * M - S;

        bool ok = true;

        if(D2 > S2) ok = false;

        if(ok && diff > 0) {
            ll nd =diff * diff;
            if(D2 < nd) ok = false;
        }

       if(ok) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }
    return 0;
}
