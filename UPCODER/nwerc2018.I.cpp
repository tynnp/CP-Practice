#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
int n, c[MAXN];
double ans = 9999;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> c[i];

    sort(c + 1, c + 1 + n);

    double t;
    for (int i = 1; i <= n; i++) {
        t = c[i] * 1.0 / i;

        if (t > 1) {
            cout << "impossible";
            return 0;
        }

        ans = min(t, ans);
    }

    cout << fixed << setprecision(6) << ans;
    return 0;
}