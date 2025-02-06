#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[15], b[15], dp[15];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        cin >> b[i];

    for (int i = 1; i <= n; i++) {
        dp[i] = b[i];
        for (int j = 1; j < i; j++)
            if (a[i] - a[j] >= k)
                dp[i] = max(dp[i], dp[j] + b[i]);
    }
    
    cout << *max_element(dp, dp + 15);
    return 0;
}