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
        mp[u] = v;
        
    }

    int k = 1;
    vector<vector<int>> arr(N+2);

    for(int i = 1; i <= N; i++){
        
        if(vis[i] == true) continue;
        
        arr[k].push_back(i);

        int j = mp[i];

        vis[j] = true;
        while(j != i){
            arr[k].push_back(j);
            vis[j] = true;
            j = mp[j];
        }
        count++;
        k++;

    }

    cout<<count<<endl;

    for(int i = 1; i <= count; i++){

        for(auto it: arr[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    return 0;
}