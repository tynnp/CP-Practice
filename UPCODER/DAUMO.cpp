#include <bits/stdc++.h>
using namespace std;

struct ToaDo {
    int first, second;
    ToaDo(int a, int b): first(a), second(b) {}
};

int n, m, u, v;
int dp[1001][1001];
int a[1001][1001];
int x[1001][1001];
int y[1001][1001];
vector<ToaDo> ans;

int main() {
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            dp[i][j] = a[i][j] + max(dp[i-1][j], dp[i][j-1]);
            x[i][j] = dp[i][j-1] > dp[i-1][j] ? i : i-1;
            y[i][j] = dp[i][j-1] > dp[i-1][j] ? j-1 : j;
        }
    }
         
    u = x[n][m], v = y[n][m];

    while (u != 1 || v != 1) {
        ans.push_back({u, v});
        int tmp = x[u][v];
        v = y[u][v];
        u = tmp;
    }
    
    ans.push_back({1, 1});
    reverse(ans.begin(), ans.end());
    
    cout << dp[n][m] << endl;
    for (auto p : ans)
        cout << p.first << " " << p.second << endl;
    cout << n << " " << m;
    return 0;    
}