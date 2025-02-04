#include <iostream>
using namespace std;

#define int long long 
#define MAXN 100005

int n, ans;
int a[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        ans = max(ans, a[i]);
    
    cout << ans;
    return 0;
}