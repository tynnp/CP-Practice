#include <bits/stdc++.h>
using namespace std;

int N, M, S;
const int MAXN = 1e5 + 5;
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
    cin >> N >> M >> S;

    while (M--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(S);
    return 0;
}