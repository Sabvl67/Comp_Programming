// Adjacency List

vector<int> adj[v];

for each edge:
    adj[edge[0]].push_back(edge[1]);
    adj[edge[1]].push_back(edge[0]);

for each node x:
    output adj[x]



// BFS for graph O(v+e)
// instead of not revisiting the same node, we just don't add a node to queue 

vector<vector<int>> adj;  
vector<bool> inqueue(v);

queue<int> q;
q.push(start);
inqueue[start]=true;

// set dist to -1
while (!q.empty()){
    int vertex = q.front();
    q.pop()
}

    for each neighbor next of adj[v]:
        if (!inquque[next]):
            inqueue[next]= true;
            q.push(next)


// DFS - recursive
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;   // adjacency list
vector<bool> visited;      // track visited nodes

void dfs(int vertex) {
    if (visited[vertex]) return;
    visited[vertex] = true;

    for (int next : adj[vertex]) {
        if (!visited[next]) {
            dfs(next);
        }
    }
}

int main() {
    int v, e; // number of vertices and edges
    cin >> v >> e;

    adj.resize(v);
    visited.assign(v, false);

    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        // Assuming 0-indexed vertices
        adj[a].push_back(b);
        adj[b].push_back(a); // remove this line if the graph is directed
    }

    int start;
    cin >> start;
    dfs(start);

    return 0;
}
