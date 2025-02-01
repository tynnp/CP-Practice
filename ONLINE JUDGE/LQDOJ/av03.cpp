#include <bits/stdc++.h>
using namespace std;

int64_t n, x;
int64_t cnt, ans;

int main() {
    cin >> n;

    while (n--) {
        cin >> x;
        if (x > 0) cnt++, ans += x;
    }

    cout << cnt << ' ' << ans;
    return 0;
}