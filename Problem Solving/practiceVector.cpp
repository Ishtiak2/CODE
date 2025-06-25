#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void dfs(vector<bool> &vis, vector<int> adjList[], stack<int> &st, int node) {
    vis[node] = true;

    for (int &i : adjList[node]) {
        if (!vis[i]) {
            dfs(vis, adjList, st, i);
        }
    }

    st.push(node);
}

vector<int> topologicalSort(int v, vector<int> adjList[]) {
    stack<int> st;
    vector<bool> vis(v, false);

    for (int i = 0; i < v; i++) {
        if (!vis[i]) {
            dfs(vis, adjList, st, i);
        }
    }

    vector<int> ans;
    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }

    return ans;
}

int main() {
    optimize();
    
    int v = 6;
    vector<int> adjList[v];

    adjList[2].push_back(3);
    adjList[3].push_back(1);
    adjList[4].push_back(0);
    adjList[4].push_back(1);
    adjList[5].push_back(0);
    adjList[5].push_back(2);

    vector<int> ans = topologicalSort(v, adjList);

    cout << "Topological Sort Order: ";
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
