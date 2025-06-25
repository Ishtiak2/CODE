#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;


vector<int> dijkstra(int n, vector<vector<pair<int, int> > >& adj, int src)
{
    vector<int> dis(n + 1, INT_MAX);

    vector<bool> vis(n + 1, false);

    dis[src] = 0;

    for (int i = 0; i < n; i++) {
        int v = -1;
        for (int j = 1; j <= n; j++) {
            if (!vis[j] && (v == -1 || dis[j] < dis[v]))
                v = j;
        }

        if (dis[v] == INT_MAX)
            break;
        vis[v] = true;

        for (auto edge : adj[v]) {
            int x = edge.first;
            int wt = edge.second;

            if (dis[v] + wt < dis[x]) {
                dis[x] = dis[v] + wt;
            }
        }
    }
    return dis;
}

int main()
{
    optimize();
    int t;
    cin >> t;

    while(t--){
        int v,k;
        cin >> v >> k;
        vector<vector<pair<int, int> > > adj(v+1);

        for(int i = 1; i <= k; i++){
            int a,b,c;
            cin >> a >> b >> c;
            adj[a].push_back({b,c});
        }
        int from,final;
        cin >> from >> final;
        vector<int> dist = dijkstra(v,adj,from);

        if(dist[final] != INT_MAX ){
            cout<<dist[final]<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}