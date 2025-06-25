#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

bool cmp(pair<ll,ll> &a, pair<ll,ll> &b){
    return a.second > b.second ;
}

int main()
{
    optimize();
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n),b(n);

        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }

        for(ll i = 0; i < n; i++){
            cin >> b[i];
        }
        
        vector<pair<ll,ll>> ans(n);

        for(ll i = 0; i < n; i++){
            ans[i].first = i;
            ans[i].second = n-a[i]+n-b[i];
        }

        sort(ans.begin(),ans.end(),cmp);
        vector<ll> c(n),d(n);

        ll i = 0;
        for(auto it: ans){
            
            c[i] = a[it.first];
            d[i] = b[it.first];
            i++;
        }
        
        for(auto it: c){
            cout<<it<<" ";
        }cout<<endl;
        
        for(auto it: d){
            cout<<it<<" ";
        }cout<<endl;


        ans.clear();
    }
    return 0;
}