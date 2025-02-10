#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;

int n, k;
int ans, a[MAXN];
map<int, int> m;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    sort(a + 1, a + 1 + n, [] (int x, int y) {
        return x > y;
    });

    for (int i = 1; i <= n; i++) {
        ans += m[a[i] + k];
        m[a[i]]++;
    }

    cout << ans;
    return 0;
}