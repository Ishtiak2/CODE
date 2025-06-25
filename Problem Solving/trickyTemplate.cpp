#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

vector<int> dijkstra(int v, vector<vector<pair<int,int>>> &adj, int source){
    vector<int> dist(v+1,INT_MAX);
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;

    dist[source] = 0;
    pq.push({0,source});

    while(!pq.empty()){
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        
        for(auto it: adj[node]){
            if(d + it.second < dist[it.first]){
                dist[it.first] = d + it.second;
                pq.push({dist[it.first], it.first});
            }
        }
    }

    return dist;
}

int main()
{
    int t;
    cin >> t;
    
    for(int i=1; i<= t; i++){
    	int n,m;
    	cin>> n>> m;
    	
    	vector<vector<pair<int,int>>> adj(n+1);
    	int f = n;
    	
    	while(m--){
    		int u,v,w;
    		cin >> u>>v>>w;
    		adj[u].push_back({v,w});
    		adj[v].push_back({u,w});
    		
    	}
    	
    	vector<int> dist = dijkstra(n,adj,1);
    	
    	if(dist[f] == INT_MAX) {
    		cout<<"Case "<<i<<": Impossible"<<endl;
    	}
    	else cout<<"Case " << i <<": " << dist[n]<<endl;
    	
    }
    return 0;
}