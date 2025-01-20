#include <iostream>
using namespace std;

#define int long long
#define MAXN 500005

int n, q;
int a[MAXN], sum[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> q;
    
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    for (int i = 1; i <= n; i++)  
        sum[i] = sum[i - 1] + a[i];
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << sum[r] - sum[l] << '\n';
    }
    
    return 0;
}