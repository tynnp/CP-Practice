#include <bits/stdc++.h>
using namespace std;

const int MAXX = 1e5 + 5;
const int MAXN = 1005;
int n, x, dp[MAXN][MAXX];
int h[MAXN], s[MAXN];

int main() {
    cin >> n >> x;
    
    for (int i = 1; i <= n; i++)
        cin >> h[i];

    for (int i = 1; i <= n; i++)
        cin >> s[i];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= x; j++) {
            dp[i][j] = dp[i-1][j];
            if (j - h[i] >= 0)  
                dp[i][j] = max(dp[i][j], dp[i-1][j-h[i]] + s[i]);
        }
    }

    cout << dp[n][x];
    return 0;
}