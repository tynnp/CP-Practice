#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e3 + 5;
int n, ans, a[MAXN];
int dp[MAXN];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    fill(dp, dp + MAXN, 1);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            if (a[i] > a[j])
                dp[i] = max(dp[i], dp[j] + 1);
        ans = max(ans, dp[i]);
    }
     
    cout << ans;
    return 0;
}