#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e3 + 5;
int n, m;
int dp[MAXN], w[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> m >> n;

    for (int i = 0; i < n; i++)
        cin >> w[i];

    for (int i = 0; i < n; i++) {
        for (int j = m; j >= w[i]; j--)
            dp[j] = max(dp[j], dp[j - w[i]] + w[i]);
    }

    cout << dp[m] << endl;
    return 0;
}