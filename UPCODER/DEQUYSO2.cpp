#include <bits/stdc++.h>
using namespace std;

int n, k, s, ans;

void Try(int k, int sum, int cnt) {
    if (sum > s || k < 0) return;
    if (cnt > n + 1) return;

    if (k == 0 && sum == s) {
        ans++;
        return;
    }

    if (cnt > n) return;
    Try(k, sum, cnt + 1);
    Try(k - 1, sum + cnt, cnt + 1);
}

int main() {
    cin >> n >> k >> s;
    Try(k, 0, 1);
    cout << ans;
    return 0;
}
