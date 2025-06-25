#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    int N,M;
    cin >> N >> M;
    map<int,int> mp;

    for(int i = 1; i <= N; i++){
        mp[i] = 0;
    }
    vector<bool> vis(N+1,false);

    ll count = 0;
    
    while(M--){
        int u,v;
        cin >> u >> v;
        if(u == v) count++;
        if(mp[v] > 0){
            count++;
        }
        mp[u] = v;
        
    }

    cout<<count<<endl;

    for(int i = 1; i <= N; i++){
        
        if(vis[i] == true) continue;
        cout<<i<<" ";

        int j = mp[i];

        vis[j] = true;
        while(j != i){
            cout<<j<<" ";
            vis[j] = true;
            j = mp[j];
        }
        cout<<endl;

    }

    return 0;
}