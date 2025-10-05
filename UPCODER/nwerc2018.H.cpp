#include <bits/stdc++.h>
using namespace std;

const int MAXN = 5e5 + 5;
int n, c, b, x, ans[MAXN];
bool a[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> c >> b;

    for (int i = 0; i < b; i++) {
        cin >> x;
        a[x] = true;
    }

    ans[1] = c % 2;
    ans[n] = 0;
    int k = 0;

    for (int i = 2; i <= n; i++) {
        if (a[i]) {
            ans[i] = 0;
            if (ans[i] != ans[i - 1]) k++;
        } else {
            if (k < c) {
                ans[i] = 1 - ans[i - 1];
                k++;
            } else {
                ans[i] = ans[i - 1];
            }
        }
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i];

    return 0;
}