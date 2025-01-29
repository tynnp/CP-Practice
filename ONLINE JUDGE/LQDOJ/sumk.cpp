#include <iostream>
using namespace std;

#define int long long 
#define MAXN 100005

int n, k;
int ans, a[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int i = 0, j = 0;
    int x = 0;

    while (i <= n && j <= n) {
        x += a[j];

        while (j - i + 1 > k) 
            x -= a[i++];
        
        ans = max(ans, x);
        j++;
    }

    cout << ans;
    return 0;
}