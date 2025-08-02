#include <iostream>
using namespace std;

#define int long long
#define MAXN 50005

int n, ans;
int a[MAXN], sum[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int x = sum[j] - sum[i - 1];
            if (x % 7 == 0)
                ans = max(ans, j - i + 1);
        }
    }
    
    cout << ans;
    return 0;
}