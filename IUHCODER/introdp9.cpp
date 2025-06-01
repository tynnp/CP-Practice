#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;
int n, x, d, dp[MAXN];

int main() {
    cin >> n;
    fill(dp, dp + MAXN, MAXN);

    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        x = i;
        while (x) {
            d = x % 10;
            x /= 10;
            dp[i] = min(dp[i], dp[i - d] + 1);
        }
    }

    cout << dp[n];
    return 0;
}