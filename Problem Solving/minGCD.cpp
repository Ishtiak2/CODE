#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;

const ll N = 2e7 + 5LL;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll ttt = 1, i, j, k, n, x, m, q = 0;

    cin >> ttt;
    while (ttt--){
        cin >> n;
        vector<ll> v(n);
        for(auto &it : v) cin >> it;
       
        sort(v.begin(), v.end());
        ll gcd = 0, cnt = 0;
        for(i = 1; i < n; i++){
            if(v[i] % v[0] == 0){
                cnt++;
                gcd = __gcd(gcd, v[i]);
            }
        }
        if(gcd == v[0]){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }

    return 0;
}