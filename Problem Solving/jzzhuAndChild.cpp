#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

const ll x = 1e4+123;
ll arr[x];
int main()
{
    optimize();
    ll n,m;
    cin >> n >> m;
    vector< pair<int,int> > vec(x);

    for(ll i = 1; i <= n; i++){
        cin >> arr[i];
        vec[i].first = arr[i];
        vec[i].second = i;
    }

    ll ans = -1;

    for(ll i = 1; i <= x; i++){
        
        if(vec[i].first > m){
            n++;
            vec[n].first = vec[i].first - m;
            vec[n].second = vec[i].second;
        }

        if(vec[i].first == 0) {
            break;
        }    
    }

    cout<<vec[n].second;

    return 0;
}