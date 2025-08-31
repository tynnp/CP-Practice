#include <bits/stdc++.h>
using namespace std;

const int MAXN = 5 * 1e4 + 5;
int n, h[MAXN], l[MAXN], r[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> h[i];

    for (int i = 1; i <= n; i++)
        l[i] = min(l[i - 1] + 1, h[i]);

    for (int i = n; i > 0; i--) 
        r[i] = min(r[i + 1] + 1, h[i]);
    
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, min(l[i], r[i]));

    cout << ans;
    return 0;
}