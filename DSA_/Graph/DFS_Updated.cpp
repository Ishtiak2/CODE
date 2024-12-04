#include <iostream>
#include <queue>
using namespace std;

class Graph {
private:
    int** adjMatrix;
    int numVertices;
    int* visited;  // Add visited as a class member

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
        
        visited = new int[numVertices]{0};  // Initialize the visited array
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

    // Get adjacency matrix and number of vertices
    int** getAdjMatrix() {
        return adjMatrix;
    }

    int getNumVertices() {
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

    // Perform DFS (Single function)
    void DFS(int u) {
        if (visited[u] == 0) {
            cout << u << ", " << flush;
            visited[u] = 1;
            for (int v = 0; v < numVertices; v++) {
                if (adjMatrix[u][v] == 1 && visited[v] == 0) {
                    DFS(v);  // Recursive call
                }
            }
        }
    }

    // Reset the visited array for DFS
    void resetDFS() {
        for (int i = 0; i < numVertices; i++) {
            visited[i] = 0;  // Reset all entries to 0
        }
    }

    // Destructor
    ~Graph() {
        for (int i = 0; i < numVertices; i++)
            delete[] adjMatrix[i];
        delete[] adjMatrix;
        delete[] visited;  // Free the memory for visited array
    }
};

// BFS function using external adjacency matrix
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
    Graph g(7);  // Create a graph with 7 vertices

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

    // Perform DFS starting from vertex 3
    cout << "DFS starting from vertex 3:" << endl;
    g.DFS(0);
    cout<<endl;
    g.resetDFS();  // Reset the DFS state

    cout << "DFS starting from vertex 0:" << endl;
    g.DFS(3);

    return 0;
}
