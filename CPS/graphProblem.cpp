#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:

    int v;
    vector< vector<int> > adjList;
    vector<bool> visited;

    Graph(int v)
    {
        this -> v = v;
        adjList.resize(v+1);
        visited.resize(v+1,false);

    }

    void addEdge(int x, int y) {
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }

    void BFS(int start)
    {
        queue<int> qu;

        visited[start] = true;
        qu.push(start);

        while(!qu.empty())
        {
            int node = qu.front();
            qu.pop();

            //cout << node <<" ";
            
            for(int i : adjList[node]){
                
                if(!visited[i]){
                    qu.push(i);
                    visited[i] = true;
                }
            }
        }
    }
};
int main()
{
    int n,e;
    
    cin >> n >> e;


    Graph g(n);

    for(int i = 1; i <= e; i++)
    {
        int x,y;
        cin >> x >> y;
        g.addEdge(x,y);
    }

    int count = 0;

    for(int i = 1; i <= n; i++)
    {
        if(!g.visited[i])
        {
            count++;
            g.BFS(i);
        }
    }

    cout << count;

    return 0;
}