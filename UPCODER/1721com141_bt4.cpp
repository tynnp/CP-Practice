#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;

int n, m, s;
vector<int> adj[MAXN];
bool visited[MAXN];

void bfs(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        cout << v << ' ';

        for (int x : adj[v]) {
            if (!visited[x]) {
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

int main() {
    cin >> n >> m >> s;

    int u, v;
    while (m--) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(s);
    return 0;
}