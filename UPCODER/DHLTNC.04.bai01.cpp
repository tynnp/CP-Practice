#include <bits/stdc++.h>
using namespace std;

int n, ans, a[1001];   
int dp[1001];

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    fill(dp, dp + 1001, 1);
    
    for (int i = 1; i <= n; i++) {
        for (int j = i-1; j >= 1; j--) 
            if (a[j] <= a[i] && dp[j] >= dp[i])
                dp[i] = dp[j] + 1;   
        ans = max(ans, dp[i]);
    }
    
    cout << ans;
    return 0;
}