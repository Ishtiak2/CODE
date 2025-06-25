#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;
#define vi vector<int>

const int f = 2e5 +123;
bool visited[f];
vi adjList[f];
int dp[f];
int nxtNode[f], n;

void dfs(int node) {
    visited[node] = true;

    for(int u : adjList[node]) {
        if(!visited[u]) dfs(u);

        if((dp[u] != -1) && (dp[u] + 1 > dp[node])) {
            dp[node] = dp[u] + 1;
            nxtNode[node] = u;
        }
    }
}

int main()
{
    optimize();

    int m,a,b;
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        dp[i] = -1;
    }

    dp[n] = 1;

    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        adjList[a].push_back(b);
    }

    dfs(1);

    if(dp[1] == -1) cout <<"IMPOSSIBLE";
    else {
        cout << dp[1] << endl;
        int node = 1;
        while(node) {
            cout << node <<" ";
            node = nxtNode[node];
        }
    }
    
    return 0;
}