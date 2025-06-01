#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MAXN = 2e5 + 5;

int n, ans, dp[MAXN];
vector<int> adj[MAXN];

void dfs(int u, int p) {
    dp[u] = 1;

    for (int v : adj[u]) {
        if (v == p)
            continue;
        
        dfs(v, u);
        dp[u] += dp[v];
        ans += dp[v] * (n - dp[v]);
    } 
}

int32_t main() {
    cin >> n;

    int u, v;
    for (int i = 1; i < n; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);
    cout << ans;
    return 0;
}