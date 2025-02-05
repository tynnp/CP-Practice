#include <bits/stdc++.h>
using namespace std;

int N, M, S;
const int MAXN = 1e5 + 5;
vector<int> adj[MAXN];
bool visited[MAXN];

void BFS(int u) {
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
    cin >> N >> M >> S;

    while (M--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    BFS(S);
    return 0;
}