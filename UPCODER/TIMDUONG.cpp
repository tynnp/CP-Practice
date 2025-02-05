#include <bits/stdc++.h>
using namespace std;

int N, M, S, T;
const int MAXN = 1e5 + 5;
vector<int> adj[MAXN];
bool visited[MAXN];
int cnt[MAXN];

void BFS(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int x : adj[v]) {
            if (!visited[x]) {
                cnt[x] = cnt[v] + 1;
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

int main() {
    cin >> N >> M >> S >> T;

    while (M--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    BFS(S);
    cout << cnt[T];

    return 0;
}