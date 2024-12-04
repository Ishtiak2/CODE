#include <bits/stdc++.h>
using namespace std;

void BFS(int adjMatrix[][100], int s, int n)
{
    queue<int> qu;
    int visited[n] = {0}; // To track visited nodes

    visited[s] = 1;
    cout << s << " ";

    qu.push(s);

    while (!qu.empty()) // Fixed syntax
    {
        int u = qu.front();
        qu.pop();

        for (int v = 0; v < n; v++)
        {
            if (adjMatrix[u][v] == 1 && visited[v] == 0)
            {
                cout << v << " ";
                visited[v] = 1;
                qu.push(v);
            }
        }
    }
}

int main()
{
    int n = 3; // Number of nodes
    int adjMatrix[100][100]; // Adjusted for flexibility
    memset(adjMatrix, 0, sizeof(adjMatrix)); // Initialize with zeros

    int edges; // Number of edges
    cin >> edges;

    int a, b;
    for (int i = 0; i < edges; i++)
    {
        cin >> a >> b;
        adjMatrix[a][b] = 1; // Add edge
        adjMatrix[b][a] = 1; // Since the graph is undirected
    }

    // Print adjacency matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Perform BFS starting from node 0
    BFS(adjMatrix, 0, n);

    return 0;
}
