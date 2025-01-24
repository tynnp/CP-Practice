#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define MAXN 100005

int l, r, d;
int n, a[MAXN], b[MAXN];
int m, u[MAXN][3];
int k, p[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m >> k;
    
    for (int i = 1; i <= n; i++)
        cin >> a[i];
          
    for (int i = 1; i <= m; i++) 
        cin >> u[i][0] >> u[i][1] >> u[i][2];
    
    for (int i = 1; i <= k; i++) {
        cin >> l >> r;
        p[l]++;
        p[r+1]--;
    }
    
    for (int i = 1; i <= m; i++) {
        l = u[i][0];
        r = u[i][1];
        d = u[i][2];
        p[i] += p[i-1];
        b[l] += d * p[i];
        b[r+1] -= d * p[i];
    }
    
    for (int i = 1; i <= n; i++) {
        b[i] += b[i-1];
        a[i] += b[i];
        cout << a[i] << ' ';
    }
    
    return 0;
}