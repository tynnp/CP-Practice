#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
#define int int64_t 

int n, m, ans, x, y;
int pos[MAXN], a[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pos[a[i]] = i;
    }
    
    ans = 1;

    for (int i = 1; i < n; i++) 
        ans += pos[i] > pos[i+1];

    while (m--) {
        cin >> x >> y;
        swap(a[x], a[y]);

        if (pos[a[y]-1] <= pos[a[y]] && pos[a[y]-1] > y) ans++;
        if (pos[a[y]] <= pos[a[y]+1] && y > pos[a[y]+1]) ans++;
        if (pos[a[y]-1] > pos[a[y]] && pos[a[y]-1] <= y) ans--;
        if (pos[a[y]] > pos[a[y]+1] && y <= pos[a[y]+1]) ans--;
        pos[a[y]] = y;
       
        if (pos[a[x]-1] <= pos[a[x]] && pos[a[x]-1] > x) ans++;
        if (pos[a[x]] <= pos[a[x]+1] && x > pos[a[x]+1]) ans++;
        if (pos[a[x]] > pos[a[x]+1] && x <= pos[a[x]+1]) ans--;
        if (pos[a[x]-1] > pos[a[x]] && pos[a[x]-1] <= x) ans--;
        pos[a[x]] = x;
        
        cout << ans << '\n';
    }

    return 0;
}