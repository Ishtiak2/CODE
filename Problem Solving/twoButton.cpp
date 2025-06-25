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

    ll ans = 0;

    if(n==m) {
        cout<<ans;
        return 0;
    }

    if(n>m){
        ans = ans+(n-m);
        cout<<ans;
    }

    else{
        if(n * 2 == m){
            ans++;
            cout<<ans;
            return 0;
        }

        else if(n*2 <m){

        }

        vector<ll> vec;

        while(n*2 <= m){
            n=n*2;
            ans++;
        }

        if(n==m){
            cout<< ans;
            return 0;
        }
        while(n*2 >= m){
            ll x = n * 2 - m + 1 + ans;
            vec.push_back(x);
            n--;
            ans++;
        }

        ll y = *min_element(vec.begin(),vec.end());
        cout<< y;
    }

    return 0;
}