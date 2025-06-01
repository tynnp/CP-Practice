#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
int n, x, a[101];
int cnt, ans[MAXN];
bool dp[MAXN];

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        x += a[i];
    }
    
    dp[0] = true;
    for (int i = 1; i <= n; i++) 
        for (int j = x; j >= a[i]; j--)
            if (dp[j - a[i]])  
                dp[j] = true;
    
    for (int i = 1; i <= x; i++) 
        if (dp[i]) 
            ans[cnt++] = i;
        
    cout << cnt << endl;
    for (int i = 0; i < cnt; i++)
        cout << ans[i] << ' ';
            
    return 0;
}