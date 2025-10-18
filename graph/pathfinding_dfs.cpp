#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> par;

void dfs(int vertex, int parent){
    if (visited[vertex]) return;
    visited[vertex] = true;
    par[vertex] = parent; 

    for (auto next : adj[v]){
        if(!visited[next]){
        dfs(next, vertex);
        }
    }
}

int main(){
    int v, e;
    cin >> v >> e;

    adj.assign(v, {});
    visited.assign(v, false);
    par.assign(n, -1);


    for (int i=0; i < e; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back[u];
    }

    int start,end;
    cin >> start >> end;

    dfs(start,-1);

    vector<int> path;
    int tmp = end;
    while (tmp != -1){
        path.push_back(tmp);
        tmp=par[tmp];
    }

    reverse(path.begin(), path.end());
    for(auto v:path){
        cout << v << endl;
    }
    return 0;
}