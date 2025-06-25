#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

vector<ll> dijkstra(ll n, vector<vector<pair<ll, ll> > >& adj, ll src)
{
    vector<ll> dis(n + 1, LLONG_MAX);
    dis[src] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, src});

    while (!pq.empty()) {
        ll current_dis = pq.top().first;
        ll v = pq.top().second;
        pq.pop();

        if (current_dis > dis[v]) continue;

        for (auto edge : adj[v]) {
            ll x = edge.first;
            ll wt = edge.second;
            ll total_cost = current_dis + 12 + wt;

            if(total_cost < dis[x]) {
                dis[x] = total_cost;
                pq.push({dis[x],x});
            }
        }
    }
    return dis;
}


int main()
{
    optimize();
    ll k;
    cin >> k;

    while(k--){
        ll n,r,s,d;
        cin >> n >> r >> s >> d;
        vector<vector<pair<ll,ll>>> adj(n+1);

        while(r--){
            ll u,v,t;
            cin >> u >> v >> t;
            adj[u].push_back({v,t});
            adj[v].push_back({u,t});
        }

        vector<ll> dist = dijkstra(n,adj,s);
        cout<< dist[d] << endl; 
    }
    return 0;
}