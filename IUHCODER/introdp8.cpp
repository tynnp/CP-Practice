#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;
int n, x;
int c[105], dp[MAXN];

int main() {
    cin >> n >> x;
    for (int i = 1; i <= n; i++)    
        cin >> c[i];

    fill(dp, dp + MAXN, MAXN);
    dp[0] = 0;
    
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= x; j++) 
            if (j - c[i] >= 0)
                dp[j] = min(dp[j], dp[j - c[i]] + 1);
    
    cout << (dp[x] != MAXN ? dp[x] : -1);
    return 0;
}