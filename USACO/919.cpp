#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define MAXN 1005

int n, k, ans;
int a[MAXN][MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("paintbarn.in", "r", stdin);
    freopen("paintbarn.out", "w", stdout);
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1++, y1++, x2++, y2++;
        
        a[x1][y1]++;
        a[x2][y2]++;
        a[x1][y2]--;
        a[x2][y1]--;
    }
    
    for (int i = 1; i < MAXN; i++)
        for (int j = 1; j < MAXN; j++)
            a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];
    
    for (int i = 1; i < MAXN; i++)
        for (int j = 1; j < MAXN; j++)
            ans += a[i][j] == k;
    
    cout << ans;
    return 0;
}