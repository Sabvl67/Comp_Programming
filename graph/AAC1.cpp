#include <iostream>
#include <vector>
#include <queue>
using namespace std;


// https://www.spoj.com/problems/AAC1/


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<vector<int>> adj(N + 1);
        for (int i = 0; i < M; i++) {
            int X, Y;
            cin >> X >> Y;
            adj[X].push_back(Y);
            adj[Y].push_back(X); // undirected
        }

        vector<int> dist(N + 1, -1);

        // BFS queue
        queue<int> q;
        q.push(1);
        dist[1] = 0;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int next : adj[node]) {
                if (dist[next] == -1) { 
                    dist[next] = dist[node] + 1;
                    q.push(next);
                }
            }
        }

        cout << dist[N] << "\n";
    }

    return 0;
}
