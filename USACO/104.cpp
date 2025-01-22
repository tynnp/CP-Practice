#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 5;

int n, k, ans;
int a[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("stacking.in", "r", stdin);
    freopen("stacking.out", "w", stdout);
    cin >> n >> k;
    
    while (k--) {
        int l, r;
        cin >> l >> r;
        a[l]++, a[r+1]--;
    }
    
    for (int i = 1; i <= n; i++)
        a[i] += a[i - 1];
        
    sort(a + 1, a + n + 1);
    
    cout << a[(n / 2) + 1];
    return 0;
}