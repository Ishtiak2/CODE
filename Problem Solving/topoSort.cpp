#include <bits/stdc++.h>
using namespace std;

vector<long long> topologicalSort(vector<vector<long long>>& adj, long long V)
{
    vector<long long> indegree(V + 1, 0);

    // Calculate indegree of each node
    for (long long i = 1; i <= V; i++) {
        for (auto it : adj[i]) {
            indegree[it]++;
        }
    }

    // Min-heap (priority queue) to get the smallest lexicographical order
    priority_queue<long long, vector<long long>, greater<long long>> pq;

    for (long long i = 1; i <= V; i++) {
        if (indegree[i] == 0) {
            pq.push(i);
        }
    }

    vector<long long> result;
    while (!pq.empty()) {
        long long node = pq.top(); // Get the smallest lexicographical order node
        pq.pop();
        result.push_back(node);

        for (auto it : adj[node]) {
            indegree[it]--;
            if (indegree[it] == 0)
                pq.push(it);
        }
    }

    // Check for cycle
    if (result.size() != V) {
        cout << "Sandro fails." << endl;
        return {};
    }

    return result;
}

int main()
{
    long long n, m;
    cin >> n >> m;

    vector<vector<long long>> adj(n + 1);

    for (long long i = 0; i < m; i++) { // Fix index to start from 0
        long long x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }

    vector<long long> vec = topologicalSort(adj, n);
    if (vec.empty()) return 0;

    for (long long i = 0; i < n; i++) { // Fix index from 0
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
