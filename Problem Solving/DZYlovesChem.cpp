#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<bool>& visited, vector< vector<int> >&adjList) {
    
    visited[node] = true;

    for(int i: adjList[node]){
        if(!visited[i]) {
            dfs(i,visited,adjList);
        }
    }
}

int main() {
    int n,m;
    cin >> n >> m;
    
    vector<bool> visited(n+1,false);
    vector< vector<int> > adjList(n+1);

    for(int i = 1; i <= m; i++)
    {
        int x,y;
        cin >> x >> y;

        adjList[x].push_back(y);
        adjList[y].push_back(x);

    }

    int count = 0;

    for(int i = 1; i <= n; i++)
    {
        if(!visited[i]) {
            count++;
            dfs(i,visited,adjList);
        }
    }
    
    long long ans = pow(2,(n-count));
    cout << ans;


    return 0;
}