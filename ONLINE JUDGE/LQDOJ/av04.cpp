#include <bits/stdc++.h>
using namespace std;

int64_t n, x, cnt;
double ans;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    while (n--) {
        cin >> x;
        cnt += x < 0;
        ans += x < 0 ? x : 0;
    }

    if (cnt) {
        cout << fixed << setprecision(2) << (ans*1.0) / cnt;
    } else {
        cout << -1;
    }

    return 0;
}