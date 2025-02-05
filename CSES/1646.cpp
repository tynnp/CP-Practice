#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MAXN = 2e5 + 5;

int n, q;
int a[MAXN], sum[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> q;
   
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];
    }
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << sum[r] - sum[l - 1] << '\n';
    }
    
    return 0;
}