#include<bits/stdc++.h>
using namespace std;

vector<int> e[10005];
int dis[10005],ans,tot;

void dfs(int x, int fath){
    for(int i = 0; i <e[x].size(); i++){
        if(e[x][i] != fath) {
            int v = e[x][i];
            dfs(v,x);
            tot = max(tot,dis[v] + 1 + dis[x]);
            dis[x] = max(dis[v]+ 1, dis[x]);
        }
    }
}
int main()
{
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t,n;
    int x,y;
    cin >> t;

    while(t--){
        cin >> n;
        tot = 0;

        for(int i = 1; i <= n; i++){
            e[i].clear();
            dis[i] = 0;
        }

        for(int i = 1; i <  n; i++){
            cin >> x >> y;
            e[x].push_back(y);
            e[y].push_back(x);
        }

        dfs(1,0);
        ans+=tot;
    }

    cout<<ans;

    return 0;
}