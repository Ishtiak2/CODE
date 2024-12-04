#include<bits/stdc++.h>
using namespace std;

class Graph
{
private:
    int numVertices;
    int** adjMatrix;

public:
    Graph(int numVertices)
    {
        this->numVertices = numVertices;
        adjMatrix = new int* [numVertices];
        
        for(int i = 0; i < numVertices; i++)
        {
            adjMatrix[i] = new int[numVertices];

            for(int j = 0; j < numVertices; j++)
            {
                adjMatrix[i][j] = 0;
            }
        }
    }

    void addEdge(int i, int j)
    {
        adjMatrix[i][j] = 1;
        adjMatrix[j][i] = 1;
    }

    void removeEdge(int i, int j)
    {
        adjMatrix[i][j] = 0;
        adjMatrix[j][i] = 0;
    }

    void print()
    {
        for(int i = 0; i < numVertices; i++)
        {
            cout << i <<" : ";

            for(int j = 0; j < numVertices; j++)
            {
                cout << adjMatrix[i][j] <<" ";
            }

            cout << endl;
        }
    }

    int** getAdjMatrix()
    {
        return adjMatrix;
    }

    int getNumVertices()
    {
        return numVertices;
    }

    

};

void BFS(int startVertex, int numVertices, int** adjMatrix)
    {
        queue<int> Q;
        int* visited = new int[numVertices]{0};
        
        Q.push(startVertex);
        visited[startVertex] = 1;

        cout << startVertex <<" , ";

        while(!Q.empty())
        {
            int u = Q.front();
            Q.pop();

            for(int v = 0; v < numVertices; v++)
            {
                if(adjMatrix[u][v] == 1 && !visited[v])
                {
                    cout << v <<" , ";
                    
                    visited[v] = 1;
                    Q.push(v);
                }
            }

        }

        cout <<endl;

    }

int main()
{
    Graph G(7);

    G.addEdge(0, 1);
    G.addEdge(0, 2);
    G.addEdge(0, 3);
    G.addEdge(1, 2);
    G.addEdge(2, 3);
    G.addEdge(3, 4);
    G.addEdge(4, 5);
    G.addEdge(4, 6);


    G.print();

    BFS(0, G.getNumVertices(), G.getAdjMatrix());

    return 0;
}

