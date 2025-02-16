#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;

int N, M, S, T;
vector<int> adj[MAXN];
bool visited[MAXN];
int p[MAXN];

void BFS(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int x : adj[v]) {
            if (!visited[x]) {
                q.push(x);
                visited[x] = true;
                p[x] = v;
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
    vector<int> res;

    for (int v = T; v != 0; v = p[v]) 
        res.push_back(v);

    for (int i = res.size(); i > 0; i--)
        cout << res[i - 1] << ' ';
    
    return 0;
}