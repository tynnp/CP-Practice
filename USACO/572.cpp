#include <iostream>
using namespace std;

#define int long long
#define MAXN 100005

int n, q, a[MAXN];
int x[MAXN], y[MAXN], z[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    cin >> n >> q;
    
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    for (int i = 1; i <= n; i++) {
        x[i] = x[i - 1] + (a[i] == 1);
        y[i] = y[i - 1] + (a[i] == 2);
        z[i] = z[i - 1] + (a[i] == 3);
    }
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << x[r] - x[l-1] << ' ' << y[r] - y[l-1] << ' ' << z[r] - z[l-1] << '\n'; 
    }
    
    return 0;
}