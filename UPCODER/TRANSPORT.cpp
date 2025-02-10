#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 5;

int n, s, ans;
int a[MAXN], dp[MAXN];

int main() {
    cin >> n >> s;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        for (int j = s; j >= a[i]; j--)
            dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
    }

    for (int i = s; i >= 0; i--) {
        if (dp[i] < s) {
            ans = dp[i];
            break;
        }
    }

    cout << ans;
    return 0;
}