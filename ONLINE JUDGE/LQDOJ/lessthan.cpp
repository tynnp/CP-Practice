#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
int n, a[MAXN], pos[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pos[i] = a[i];
    }

    sort(a + 1, a + 1 + n);

    for (int i = 1; i <= n; i++) {
        auto it = lower_bound(a + 1, a + 1 + n, pos[i]);
        cout << it - a - 1 << ' ';
    }

    return 0;
}