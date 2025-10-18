#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>  // for reverse()

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> par;

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    par[start] = -1;

    while (!q.empty()) {
        int vertex = q.front();
        q.pop();

        for (auto next : adj[vertex]) {
            if (!visited[next]) {
                visited[next] = true;
                par[next] = vertex;
                q.push(next);
            }
        }
    }
}

int main() {
    int n, m;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> m;

    adj.assign(n, {});
    visited.assign(n, false);
    par.assign(n, -1);

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        // Assuming 0-indexed graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start, end;
    cout << "Enter start and end vertex: ";
    cin >> start >> end;

    bfs(start);

    if (!visited[end]) {
        cout << "No path found from " << start << " to " << end << ".\n";
        return 0;
    }

    // Reconstruct shortest path
    vector<int> path;
    for (int tmp = end; tmp != -1; tmp = par[tmp]) {
        path.push_back(tmp);
    }
    reverse(path.begin(), path.end());

    cout << "Shortest path: ";
    for (int v : path) {
        cout << v << " ";
    }
    cout << "\n";

    cout << "Path length: " << path.size() - 1 << "\n";

    return 0;
}
