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
    
    int x;
    while (!q.empty()) {
        x = q.front();
        q.pop();
        
        cout << x << ' ';
        
        for (int v : adj[x]) {
            if (!visited[v]) {
                q.push(v);
                visited[v] = true;
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