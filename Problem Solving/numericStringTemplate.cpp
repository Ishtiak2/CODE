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
        vector<ll> a(n+1);

        for(ll i = 1; i <= n; i++) cin >> a[i];
        
        ll m;
        cin >> m;

        bool flag = false;
        for(ll i = 1; i <= m; i++) {
            string str;
            cin >> str;
            
            if(str.length() != n){
                cout << "NO" <<endl;
                continue;
            }

            unordered_map<ll,char> mp;
            unordered_map<char,ll> sp;

            for(ll i = 1; i <= n; i++) {
                ll x = a[i];
                ll y = str[i-1];
                
                mp[x] = '$';
                sp[y] = INT_MIN;
            }

            flag = false;

            for(ll i = 1; i <= n; i++) {
                
                ll x = a[i];
                
                if(mp[x] != '$'){
                    
                    if(mp[x] != str[i-1]){
                        flag = true;
                        break;
                    }
                }
                
                else mp[x] = str[i-1];
            }

            if(flag){
                cout <<"NO" << endl;
                continue;
            }

            for(ll i = 1; i <= n; i++) {
                
                ll x = str[i-1];
                
                if(sp[x] != INT_MIN){
                    
                    if(sp[x] != a[i]){
                        flag = true;                        
                        break;
                    }
                }
                
                else sp[x] = a[i];
            }
            if(!flag) cout <<"YES" << endl;
            else cout <<"NO" << endl;
        }
    }
    return 0;
}