#include <bits/stdc++.h>
using namespace std;

string s, t;
int dp[3005][3005];

main() {
    getline(cin, s);
    getline(cin, t);

    int n = s.size();
    int m = t.size();

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i-1] == t[j-1])   
                dp[i][j] = dp[i-1][j-1] + 1;
            else 
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    cout << dp[n][m];
    return 0;
}