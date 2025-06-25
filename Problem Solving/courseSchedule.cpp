#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

vector<vector<int>> adj;
vector<int> state;
stack<int> topo;
bool hasCycle = false;

void dfs(int node) {
    if(state[node] == 1) {
        hasCycle = true;
        return;
    }

    if(state[node] == 2) return;

    state[node] = 1;

    for(int neighbor : adj[node]) {
        dfs(neighbor);
        if(hasCycle) return;
    }

    state[node] = 2;
    topo.push(node);
}

int main()
{
    optimize();

    int n,m;
    cin >> n >> m;

    adj.resize(n+1);
    state.assign(n+1,0);

    for(int i = 0; i < m; i++) {
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    for(int i = 1; i <= n; i++) {
        if(state[i] == 0) dfs(i);
        if(hasCycle) break;
    }

    if(hasCycle) cout <<"IMPOSSIBLE" << endl;

    else {
        while(!topo.empty()) {
            cout << topo.top() <<" ";
            topo.pop();
        } cout << endl;
    }
    
    return 0;
}