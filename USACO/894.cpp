#include <iostream>
using namespace std;

const int MAXN = 1e5 + 5;
int n, ans;
int deg[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("planting.in", "r", stdin);
    freopen("planting.out", "w", stdout);
    cin >> n;
    
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        deg[u]++;
        deg[v]++;
    }
    
    for (int i = 1; i < MAXN; i++)
        ans = max(ans, deg[i] + 1);
    
    cout << ans;
    return 0;
}