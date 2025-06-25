#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

vector<int> topoSort(vector<vector<int>> &adj,int v){
    vector<int> indegree(v);
    for(int i = 0; i < v; i++ ){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }

    priority_queue<int,vector<int>,greater<int>> q;

    for(int i = 0; i <v; i++){
        if(indegree[i]==0) q.push(i);
    }

    vector<int> result;

    while(!q.empty()){
        int node = q.top();
        q.pop();
        result.push_back(node);

        for(auto it: adj[node]){
            indegree[it]--;

            if(indegree[it] == 0){
                q.push(it);
            }
        }
        
    }

    return result;
}

int main()
{
    vector<vector<int>> adj(6);
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[4].push_back(5);
    adj[5].push_back(1);
    adj[5].push_back(2);

    vector<int> asd = topoSort(adj,6);

    for(auto it: asd){
        cout<<it<<" ";
    }

    return 0;
}