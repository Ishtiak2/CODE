#include <iostream>
#include <queue>
using namespace std;

class Graph {
private:
    int** adjMatrix;
    int numVertices;

public:
    // Initialize the matrix with 0
    Graph(int numVertices) {
        
        this->numVertices = numVertices;
        
        adjMatrix = new int* [numVertices];
        
        for (int i = 0; i < numVertices; i++) {
            adjMatrix[i] = new int[numVertices];
            
            for (int j = 0; j < numVertices; j++)
                adjMatrix[i][j] = 0;  // Set initial values to 0

            
        }
    }

    // Add edges
    void addEdge(int i, int j) {
        adjMatrix[i][j] = 1;
        adjMatrix[j][i] = 1;
    }

    // Remove edges
    void removeEdge(int i, int j) {
        adjMatrix[i][j] = 0;
        adjMatrix[j][i] = 0;
    }

    //it is not necessary. In case we have to return adjMatrix and numVertices, we have to create two function as voth of the variable is 'private'
    int** getAdjMatrix()
    {
        return adjMatrix;
    }

    int getNumVertices()
    {
        return numVertices;
    }

    // Print the adjacency matrix
    void toString() {
        for (int i = 0; i < numVertices; i++) {
            cout << i << " : ";
            for (int j = 0; j < numVertices; j++)
                cout << adjMatrix[i][j] << " ";
            cout << "\n";
        }
    }

    // Perform BFS
    void BFS(int startVertex) {
        queue<int> Q;
        int* visited = new int[numVertices]{0};

        // Initial
        cout << startVertex << ", " << flush;
        visited[startVertex] = 1;
        Q.push(startVertex);

        // Explore
        while (!Q.empty()) {
            int u = Q.front();  // Vertex u for exploring
            Q.pop();

            // Adjacent vertices of vertex u
            for (int v = 0; v < numVertices; v++) {
                if (adjMatrix[u][v] == 1 && !visited[v]) {
                    cout << v << ", " << flush;  // Visit vertex
                    visited[v] = 1;
                    Q.push(v);
                }
            }
        }
        cout << endl;
        delete[] visited;
    }

    ~Graph() {
        for (int i = 0; i < numVertices; i++)
            delete[] adjMatrix[i];
        delete[] adjMatrix;
    }
};

//in case we have a given adjMatrix
void BFS_(int startVertex, int numVertices, int** adjMatrix) {
        queue<int> Q;
        int* visited = new int[numVertices]{0};

        // Initial
        cout << startVertex << ", " << flush;
        visited[startVertex] = 1;
        Q.push(startVertex);

        // Explore
        while (!Q.empty()) {
            int u = Q.front();  // Vertex u for exploring
            Q.pop();

            // Adjacent vertices of vertex u
            for (int v = 0; v < numVertices; v++) {
                if (adjMatrix[u][v] == 1 && !visited[v]) {
                    cout << v << ", " << flush;  // Visit vertex
                    visited[v] = 1;
                    Q.push(v);
                }
            }
        }
        cout << endl;
        delete[] visited;
    }

int main() {
    Graph g(7);  // Create a graph with 8 vertices

    // Add edges starting from vertex 0
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(4, 6);

    // Print adjacency matrix
    cout << "Adjacency Matrix:" << endl;
    g.toString();

    // Perform BFS starting from vertex 0
    cout << "BFS starting from vertex 0:" << endl;
    g.BFS(0);

    cout << "BFS starting from vertex 3:" << endl;
    g.BFS(3);

    cout << "BFS starting from vertex 4:" << endl;
    BFS_(4, g.getNumVertices(), g.getAdjMatrix());


    return 0;
}
