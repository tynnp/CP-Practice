#include <bits/stdc++.h>
using namespace std; 

const int MAXN = 2e3 + 5;
int n, v, a[MAXN];
bool dp[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> v;
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
        
    dp[0] = true;
    for (int i = 0; i < n; i++) 
        for (int j = v; j >= a[i]; j--) 
            dp[j] |= dp[j - a[i]];
    
    int ans = 0;
    for (int i = 1; i <= v; i++)
        if (dp[i])
            ans = max(ans, i);
    
    cout << ans;
    return 0;
}