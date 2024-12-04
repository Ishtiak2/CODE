#include <bits/stdc++.h>
using namespace std;

void BFS(int A[][8], int vtx, int n) {
    queue<int> q;
    cout << vtx << " ";
    q.push(vtx);

    // Create a visited array of size `n` and initialize to 0
    int* visited = new int[n]{0};
    visited[vtx] = 1; // Mark the starting vertex as visited

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v = 0; v < n; v++) {
            if (visited[v] == 0 && A[u][v] == 1) {
                cout << v << " ";
                q.push(v);
                visited[v] = 1; // Mark this vertex as visited
            }
        }
    }

    delete[] visited; // Free the dynamically allocated memory
}

int main() {
    int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};

    BFS(A, 1, 8); // Start BFS from vertex 1 for an 8-vertex graph

    return 0;
}

