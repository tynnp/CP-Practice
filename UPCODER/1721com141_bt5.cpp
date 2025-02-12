#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;

int n, m, s;
vector<int> adj[MAXN];
bool visited[MAXN];

void dfs(int u) {
    if (visited[u])
        return;

    cout << u << ' ';
    visited[u] = true;

    for (int v : adj[u]) 
        dfs(v);
}

int main() {
    cin >> n >> m >> s;

    int u, v;
    while (m--) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(s);
    return 0;
}