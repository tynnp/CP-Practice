#include <bits/stdc++.h>
using namespace std;

const int MAXN = 5e3 + 5;
string s1, s2;
int dp[MAXN][MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> s1 >> s2;

    fill(&dp[0][0], &dp[0][0] + MAXN*MAXN, INT_MAX);
    int n = s1.size(), m = s2.size();

    for (int i = 0; i <= n; i++) dp[i][0] = i;
    for (int j = 0; j <= m; j++) dp[0][j] = j;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1];
            else 
                dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
        }
    }

    cout << dp[n][m];
    return 0;
}