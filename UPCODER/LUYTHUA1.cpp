#include <iostream>
using namespace std;

#define int int64_t

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    int a, n, ans = 1;
    cin >> a >> n;

    for (int i = 1; i <= n; i++)
        ans = ans * a;

    cout << ans;
    return 0;
}