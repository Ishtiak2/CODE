#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

vector<int> dijkstra(int v, vector<vector<pair<int,int>>> & adj, int source){
    vector<int> dist(v+1,INT_MAX);
    dist[source] = 0;

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    pq.push({0,source});

    while(!pq.empty()){
        int d = pq.top().first;
        int node = pq.top().second;

        pq.pop();

        for(auto it: adj[node]){
            int wt = it.second;
            int adjNode = it.first;

            if(d + wt < dist[adjNode]){
                dist[adjNode] = d + wt;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }

    return dist;

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