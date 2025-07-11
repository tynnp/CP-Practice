#include <bits/stdc++.h>
using namespace std;

int n, q;
string s;

void solve() {
    char c;
    int m, ans = 0;
    int l = 0, r = 0;
    cin >> m >> c;

    while (l < n && r < n) {
        while (r < n) {
            if (s[r] != c) {
                if (m == 0) break;
                m--;
            }

            r++;
        }

        ans = max(ans, r - l);
        m += s[l++] != c;
    }

    cout << ans << '\n';
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> s >> q;
    while (q--) solve();
    return 0;
}