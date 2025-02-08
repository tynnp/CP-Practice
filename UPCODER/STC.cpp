#include <bits/stdc++.h>
using namespace std;

int64_t n, ans = -1;
int64_t dp[505][505];

int main() { 
    cin >> n;
    dp[0][0] = 1;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            for (int k = 0; k < j; k++)
                dp[i][j] += dp[i - j][k];
                
    for (int i = 1; i <= n; i++)
        ans += dp[n][i];
    
    cout << ans;
    return 0;
}
